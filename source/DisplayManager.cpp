#include <GL/glew.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glext.h>
#include <iostream>
#include "Display.h"
#include "DisplayManager.h"

void DisplayManager::createDisplay(){
      std::cout<<"createDisplay"<<std::endl;
      m_Display.setTitle("First_test");
      m_Display.create();
     
}

void DisplayManager::updateDisplay(){
      m_Display.update();
}

void DisplayManager::destroyDisplay(){
      m_Display.destroy();
}