//Rectangle.h 

#include "Shape.h"

class Rectangle : public Shape
{
      int height;
      
      public:
         Rectangle(int, int, int, int);    
         void draw();        
};
