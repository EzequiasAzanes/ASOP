//Triangle.cpp

#include <iostream>
#include "Triangle.h"

Triangle::Triangle(int x, int y, int size) : Shape(x, y , size)
{
}

void Triangle::draw()
{
   //print y blank lines 
   for(int i =0; i < y; i++)
        std::cout << std::endl;
     
     //outer loop
     for(int i =0; i < size; i++)
     {
        //prints x no of spaces 
        for(int j = 0; j < x; j++)    
          std::cout <<  " ";

        //produce the triangle
        for(int j = 0; j < (size - 1 - i); j++)  
           std::cout << " ";
        
        for(int j = 0; j < (i * 2 + 1); j++)  
           std::cout << "X";
             
        std::cout << std::endl;
     }    
}
