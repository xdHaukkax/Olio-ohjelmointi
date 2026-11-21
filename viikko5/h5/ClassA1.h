
#ifndef CLASSA1_H
#define CLASSA1_H

#include "ClassB.h"

class ClassA1
{
private:
    ClassB objectB;

public:
    ClassA1(ClassB);
    string getBinfo();
    void setBinfo(string);
};

#endif
