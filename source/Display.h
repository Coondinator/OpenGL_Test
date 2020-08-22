#ifndef _DISPLAY_
#define _DISPLAY_

#include <GL/glew.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glext.h>
#include <iostream>

class DisplayMode{
      private:
           int width, height;
      public:
           DisplayMode(const int w=0, const int h=0):width(w),height(h){};

           int DisplayMode_Width() const {return width;};

           int DisplayMode_Height() const {return height;};

           ~DisplayMode(){};
};

/*class ContexAttri{
      private:
           int minor, major;
           bool bProfileCore;
      public: 
           ContexAttri(const int a=0, const int b=0,const bool c=false):minor(a),major(b),bProfileCore(c){};
         
           ~ContexAttri(){}; 

           void CoreMode (const bool& UsingCore){bProfileCore=UsingCore;};

};*/

class Display{
      private:
           DisplayMode displaymode;

           const char* title;

           int mWindows;



      public:
           Display():title(" "){};
             
           ~Display(){};

           void create();

           void update();

           void destroy();

           void setTitle(const char* _Title);

      private:

           void processEvent();


};


#endif