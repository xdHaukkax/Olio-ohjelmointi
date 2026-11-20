
#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"
#include <string>

class ItalianChef : public Chef
{
public:
    ItalianChef(std::string chefName);
    ~ItalianChef();

    void makePasta();
    std::string getName();
};

#endif
