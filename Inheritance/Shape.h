//add an include guard to prevent reddinition of classes

#ifndef _SHAPE_H_
#define _SHAPE_H_
class Shape
{
    protected:
        int x, y, size;

    public:
        Shape(int, int, int);          
};
#endif
//Shape shape; //illegal 
//Shape shape(3, 1, 5);
