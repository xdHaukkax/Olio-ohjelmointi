
#ifndef CLASSA2_H
#define CLASSA2_H

#include "ClassB.h"

class ClassA2
{
private:
    ClassB &refB;

public:
    ClassA2(ClassB&);
    string getBinfo();
    void setBinfo(string);
};

#endif
