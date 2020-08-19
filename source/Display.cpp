#include <GL/glew.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glext.h>
#include <iostream>
#include "Display.h"

void Display::create(ContexAttri attri){

      glutInit(&__argc,__argv);
      glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
      glutInitWindowSize(displaymode.DisplayMode_Width(), displaymode.DisplayMode_Height());
      glutInitWindowPosition(0,0);
      mWindows=glutCreateWindow(title); 

      if(mWindows<1){
           std::cerr<<"ERROR: Could not create a new rendering window" <<std::endl;
           exit(EXIT_FAILURE);
      }
           
}


void Display::update(){
      
      glutSwapBuffers();
};

void Display::destroy(){
      glutDestroyWindow(mWindows);
     
};

void Display::setTitle(const char* _Title){
      title=_Title;
};
void Display::processEvent(){
      glutKeyboardFunc(EventCall_Back);
}

void EventCall_Back(unsigned char key, int xMouse, int yMouse){
      if(key==GLUT_KEY_END){
         Escape();
      }
      
};

void Escape(){};

