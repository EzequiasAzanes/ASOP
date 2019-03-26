//Rectangle.cpp

#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(int x, int y, int size, int height) : Shape(x, y, size)    
{
    this->height = height;
}

void Rectangle::draw()
{
     //print y blank lines 
     for(int i =0; i < y; i++)
        std::cout << std::endl;
     
     //outer loop
     for(int i =0; i < height; i++)
     {
        //prints x no of spaces 
        for(int j = 0; j < x; j++)    
          std::cout <<  " ";
             
         //prints the no of Xs
         for(int j = 0; j < size; j++)
            std::cout << "X";
            
          std::cout << std::endl;
     }
}
