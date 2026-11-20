
#include <iostream>
#include "Animal.h"
#include "Dog.h"

using namespace std;

int main()
{
    Animal animal;
    Dog dog;

    animal.callOut();
    dog.callOut();

    return 0;
}
