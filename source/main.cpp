//#include <GL/glfw.h>
#include <GL/glew.h>

#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glext.h>

#include "DisplayManager.h"
#include "Display.h"
using namespace std;

void init(){};

void DisplayInit(){

     glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
     glutInitWindowSize(500, 500);
     glutInitWindowPosition(100, 100);
     glutCreateWindow("Triangle Using OpenGL");
     glewInit();
     
};

void EventCall_Back(unsigned char key, int xMouse, int yMouse){
        if(key==GLUT_KEY_END){}
}


int main(int argc, char **argv){
     // DisplayManager m_displaymanager;
     glutInit(&argc,argv);
     // m_displaymanager.createDisplay();
     
     cout<<"lalala"<<endl;
     glutMainLoop();
     return 0;
}