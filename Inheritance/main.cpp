#include <cstdlib>
#include <iostream>

using namespace std;

#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"


int main(int argc, char *argv[])
{
    
    Square square (3, 5, 6);
    square.draw(); 
    
    Square square2 (5, 4, 10);
    square2.draw(); 
    
    /////////////////////////////////
    
    Rectangle rect(4, 5, 12, 4);
    rect.draw();

    Triangle tri(4, 5, 10);    
    tri.draw();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
