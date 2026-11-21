
#include <iostream>
#include "ClassB.h"
#include "ClassA1.h"
#include "ClassA2.h"

using namespace std;

int main()
{
    // OSA 1: Osoitin

    int a = 5;

    cout << "a:n arvo on: " << a
         << " ja osoite on: " << &a << endl;

    int *pointerA = &a;

    cout << "Pointterin osoittama osoite on: "
         << pointerA << endl;

    cout << "Pointterin osoittaman muistipaikan arvo on: "
         << *pointerA << endl;


    // OSA 2: Referenssi

    int &refA = a;

    cout << "refA osoittaa osoitteeseen on: "
         << &refA << endl;

    cout << "refA:n osoittaman muistipaikan arvo on: "
         << refA << endl;

    int b = 6;

    // Pointteri voidaan asettaa osoittamaan muuttujaan b
    pointerA = &b;

    cout << "PointerA osoittaa nyt osoitteeseen: "
         << pointerA << endl;

    cout << "PointerA:n osoittama arvo on: "
         << *pointerA << endl;

    // refA viittaa edelleen muuttujaan a
    cout << "refA viittaa edelleen muuttujaan a: "
         << refA << endl;


    // OSA 3: Olio argumenttina

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);

    objA1.setBinfo("Olion objA1 asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA1: " << objA1.getBinfo() << endl;


    // OSA 4: Referenssi argumenttina

    ClassB &refB = objB;

    ClassA2 objA2(refB);

    objA2.setBinfo("Olion Agr asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA2 " << objA2.getBinfo() << endl;

    cout << endl;

    return 0;
}
