//Square.cpp - definition file of Square class

#include <iostream>
#include "Square.h"

Square::Square(int x, int y, int size) : Shape(x, y, size)
{
}

void Square::draw()
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
             
         //prints the no of Xs
         for(int j = 0; j < size; j++)
            std::cout << "X";
            
          std::cout << std::endl;      
     } 
}
// Square sq (4, 3, 5);
