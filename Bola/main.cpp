#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <gl/gl.h>
#include <gl/glu.h>
#include <gl/glut.h>
#include <math.h>

#define GL_CLAMP_TO_EDGE 0x812F

//speed
static GLfloat move = -100, height = 200, position=height, v=0, a=-2;

#define NUM_TEXTURES    2
GLuint  textureObjects[NUM_TEXTURES];

const char *szTextureFiles[] = {"Wood.tga", "worldmap.tga"};

#pragma pack(1)
typedef struct
{
    GLbyte identsize;
    GLbyte colorMapType;
    GLbyte imageType;



    unsigned short colorMapStart;
    unsigned short colorMapLength;
    unsigned char  colorMapBits;
    unsigned short xstart;
    unsigned short ystart;
    unsigned short width;
    unsigned short height;
    GLbyte bits;
    GLbyte descriptor;
} TGAHEADER;
#pragma pack(8)


GLint gltWriteTGA(const char *szFileName)
 {
    FILE *pFile;
    TGAHEADER tgaHeader;
    unsigned long lImageSize;
    GLbyte *pBits = NULL;
    GLint iViewport[4];
    GLenum lastBuffer;


 glGetIntegerv(GL_VIEWPORT, iViewport);


 lImageSize = iViewport[2] * 3 * iViewport[3];


    pBits = (GLbyte *)malloc(lImageSize);
    if(pBits == NULL)
        return 0;

    // membaca bits dari color buffer
    glPixelStorei(GL_PACK_ALIGNMENT, 1);
 glPixelStorei(GL_PACK_ROW_LENGTH, 0);
 glPixelStorei(GL_PACK_SKIP_ROWS, 0);
 glPixelStorei(GL_PACK_SKIP_PIXELS, 0);


    glGetIntegerv(GL_READ_BUFFER, (GLint *)&lastBuffer);
    glReadBuffer(GL_FRONT);

    glReadBuffer(lastBuffer);

    // Inisialisasi Targa header
    tgaHeader.identsize = 0;
    tgaHeader.colorMapType = 0;
    tgaHeader.imageType = 2;
    tgaHeader.colorMapStart = 0;
    tgaHeader.colorMapLength = 0;
    tgaHeader.colorMapBits = 0;
    tgaHeader.xstart = 0;
    tgaHeader.ystart = 0;
    tgaHeader.width = iViewport[2];
    tgaHeader.height = iViewport[3];
    tgaHeader.bits = 24;
    tgaHeader.descriptor = 0;

    // membuka file
    pFile = fopen(szFileName, "wb");
    if(pFile == NULL)
  {
        free(pBits);
        return 0;
  }

    // membaca header
    fwrite(&tgaHeader, sizeof(TGAHEADER), 1, pFile);

    // membaca image data
    fwrite(pBits, lImageSize, 1, pFile);

    // buffer dan tutup file
    free(pBits);
    fclose(pFile);

    // Success!
    return 1;
 }


GLbyte *gltLoadTGA(const char *szFileName, GLint *iWidth, GLint *iHeight, GLint *iComponents, GLenum *eFormat)
 {
    FILE *pFile;
    TGAHEADER tgaHeader;
    unsigned long lImageSize;
    short sDepth;
    GLbyte *pBits = NULL;

    // Default/Failed values
    *iWidth = 0;
    *iHeight = 0;

    *iComponents = GL_RGB8;

    // open file
    pFile = fopen(szFileName, "rb");
    if(pFile == NULL)
        return NULL;

    // membaca header (binary)
    fread(&tgaHeader, 18/* sizeof(TGAHEADER)*/, 1, pFile);

    // Get width, height, depth of texture
    *iWidth = tgaHeader.width;
    *iHeight = tgaHeader.height;
    sDepth = tgaHeader.bits / 8;


    if(tgaHeader.bits != 8 && tgaHeader.bits != 24 && tgaHeader.bits != 32)
        return NULL;

    // Calculate size of image buffer
    lImageSize = tgaHeader.width * tgaHeader.height * sDepth;

    // mengalokasikan memory dan check for success
    pBits = (GLbyte*)malloc(lImageSize * sizeof(GLbyte));
    if(pBits == NULL)
        return NULL;

    // membaca bits
    // cek untuk membaca error
    if(fread(pBits, lImageSize, 1, pFile) != 1)
  {
        free(pBits);
        return NULL;
  }

    // Set OpenGL format expected
    switch(sDepth)
  {
        case 3:

            *iComponents = GL_RGB8;
            break;
        case 4:

            *iComponents = GL_RGBA8;
            break;
        case 1:
            *eFormat = GL_LUMINANCE;
            *iComponents = GL_LUMINANCE8;
            break;
  };



    fclose(pFile);

    return pBits;
 }


void gltDrawSphere(GLfloat fRadius, GLint iSlices, GLint iStacks)
    {
    GLfloat drho = (GLfloat)(3.141592653589) / (GLfloat) iStacks;
    GLfloat dtheta = 2.0f * (GLfloat)(3.141592653589) / (GLfloat) iSlices;
 GLfloat ds = 1.0f / (GLfloat) iSlices;
 GLfloat dt = 1.0f / (GLfloat) iStacks;
 GLfloat t = 1.0f;
 GLfloat s = 0.0f;
    GLint i, j;     // Looping variabel

 for (i = 0; i < iStacks; i++)
  {
  GLfloat rho = (GLfloat)i * drho;
  GLfloat srho = (GLfloat)(sin(rho));
  GLfloat crho = (GLfloat)(cos(rho));
  GLfloat srhodrho = (GLfloat)(sin(rho + drho));
  GLfloat crhodrho = (GLfloat)(cos(rho + drho));



  glBegin(GL_TRIANGLE_STRIP);
        s = 0.0f;
  for ( j = 0; j <= iSlices; j++)
   {
   GLfloat theta = (j == iSlices) ? 0.0f : j * dtheta;
   GLfloat stheta = (GLfloat)(-sin(theta));
   GLfloat ctheta = (GLfloat)(cos(theta));

   GLfloat x = stheta * srho;
   GLfloat y = ctheta * srho;
   GLfloat z = crho;

            glTexCoord2f(s, t);
            glNormal3f(x, y, z);
            glVertex3f(x * fRadius, y * fRadius, z * fRadius);

            x = stheta * srhodrho;
   y = ctheta * srhodrho;
   z = crhodrho;
   glTexCoord2f(s, t - dt);
            s += ds;
            glNormal3f(x, y, z);
            glVertex3f(x * fRadius, y * fRadius, z * fRadius);
            }
        glEnd();

        t -= dt;
        }
    }

// Rotasi
static GLfloat xRot = 0.0f;
static GLfloat yRot = 0.0f;

/*******************************************************************************************/
void drawball(void)
 {
    glPushMatrix();
 glBindTexture(GL_TEXTURE_2D, textureObjects[1]);
 glRotatef(-90, 0.0f, 1.0f, 0.0f);
 gltDrawSphere(10, 26, 13);
 glPopMatrix();
 }

/*******************************************************************************************/


// manggil ke draw scene
void RenderScene(void)
 {

 // hapus background
 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
 /********************************************************************************/
 //the ball's move
 v = v+a; position = position + v; move = move - a/1.9;
 if(position < 0) v = -v;
 if(position < -10) {position = -10; v = 0; a=0;}

 /********************************************************************************/
 //gambar bola
 glPushMatrix();
 glColor3ub(255, 255, 255);
 glTranslatef(move, position, 0.0f);
 glRotatef(v*3, 0.0f, 1.0f, 1.0f); //rotasi bola
 drawball();
 glPopMatrix();
 /************************************************************************************/

//floor
 glPushMatrix();
 glBindTexture(GL_TEXTURE_2D, textureObjects[0]);
 glTranslatef(0.0f,-26.0f, 0.0f);
 glScalef(20.0f, 0.30f, 1.0f);
 gltDrawSphere(20, 26, 13);
 glPopMatrix();

 // Show the image
 glutSwapBuffers();
 }


// Fungsi ini melakukan inisialisasi yang diperlukan pada rendering
// context.
void SetupRC()
 {
 int i;

 GLfloat  lightPos[] = { -50.f, 50.0f, 100.0f, 1.0f };
 //GLfloat  lightPos[] = { -100.f, 100.0f, 50.0f, 1.0f };
 GLfloat  ambientLight[] = { 0.3f, 0.3f, 0.3f, 0.0f };
 GLfloat  diffuseLight[] = { 0.7f, 0.7f, 0.7f, 1.0f };
 GLfloat  specular[] = { 1.0f, 1.0f, 1.0f, 1.0f};
 GLfloat  specref[] =  { 1.0f, 1.0f, 1.0f, 1.0f };

 glEnable(GL_DEPTH_TEST); // Hidden surface removal
 glEnable(GL_LIGHTING);  //tambahan buat lightning,,

 glLightfv(GL_LIGHT0,GL_AMBIENT,ambientLight);
 glLightfv(GL_LIGHT0,GL_DIFFUSE,diffuseLight);
 glLightfv(GL_LIGHT0,GL_SPECULAR,specular);
 glEnable(GL_LIGHT0);

 glLightfv(GL_LIGHT0,GL_POSITION,lightPos);

 glFrontFace(GL_CCW);
 glEnable(GL_COLOR_MATERIAL);

 glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);

 glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR,specref);
 glMateriali(GL_FRONT_AND_BACK,GL_SHININESS,128); // give shininess effect

 // White background
 glClearColor(0.6230f, 0.713f, 0.803f, 1.0f );  //159;182;205

   // Set up texture maps
    glEnable(GL_TEXTURE_2D);
    glGenTextures(NUM_TEXTURES, textureObjects);
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);


    for(i = 0; i < NUM_TEXTURES; i++)
        {
        GLbyte *pBytes;
        GLint iWidth, iHeight, iComponents;
        GLenum eFormat;

        glBindTexture(GL_TEXTURE_2D, textureObjects[i]);

        // Load texture map
        pBytes = gltLoadTGA(szTextureFiles[i], &iWidth, &iHeight, &iComponents, &eFormat);
        gluBuild2DMipmaps(GL_TEXTURE_2D, iComponents, iWidth, iHeight, eFormat, GL_UNSIGNED_BYTE, pBytes);
        free(pBytes);

        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        }

    }


void TimerFunc(int value)
    {
    glutPostRedisplay();
    glutTimerFunc(100, TimerFunc, 1);
    }


void ChangeSize(int w, int h)
 {
 GLfloat nRange = 110.0f;

 if(h == 0)
  h = 1;

    glViewport(0, 0, w, h);

 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();

    if (w <= h)
  glOrtho (-nRange, nRange, -nRange*h/w, nRange*h/w, -nRange, nRange);
    else
  glOrtho (-nRange*w/h, nRange*w/h, -nRange, nRange, -nRange, nRange);

 glMatrixMode(GL_MODELVIEW);
 glLoadIdentity();
 glTranslatef(0.0f, -80.0f, 0.0f);

 }

int main(int argc, char* argv[])
 {
 glutInit(&argc, argv);
 glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
 glutInitWindowSize(500,500);
 glutInitWindowPosition(100,100);
 glutCreateWindow(".:OpenGL - Bouncing Ball:.");
 glutReshapeFunc(ChangeSize);
 glutDisplayFunc(RenderScene);
 glutTimerFunc(500, TimerFunc, 1);
 SetupRC();
 glutMainLoop();

 return 0;
 }
