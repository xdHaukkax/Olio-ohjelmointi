#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;

public:
    void setWidth(double w);
    void setHeight(double h);

    double getArea();
    double getCircum();
};

#endif