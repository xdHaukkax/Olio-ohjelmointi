
#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"

using namespace std;

int main()
{
    // Ensimmäinen tehtävä: Chef Gordon Ramsay
    {
        Chef chef("Gordon Ramsay");

        chef.makeSalad();
        chef.makeSoup();
    }

    // Toinen tehtävä: ItalianChef Anthony Bourdain
    {
        Chef chef("Anthony Bourdain");

        ItalianChef italianChef("Anthony Bourdain");

        chef.makeSalad();
        chef.makeSoup();

        italianChef.makePasta();

        cout << "name of the Italian Chef is "
             << italianChef.getName() << endl;
    }

    return 0;
}
