#ifndef _DISPLAYMANAGER_
#define _DISPLAYMANAGER_

#include <GL/glew.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glext.h>
#include "Display.h"

class DisplayManger{
    
    private:

    public:
         DisplayManger(){};
        
         ~DisplayManger(){};
         
         void createDisplay(){};

         void updateDisplay(){};

         void destroyDisplay(){};
         

};

#endif