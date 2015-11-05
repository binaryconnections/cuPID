#include "projects.h"

projects::projects()
{
}


string projects::getName()
{
    return name;
}

int projects::getCapacity()
{
    return capacity;
}

int projects::getAmount()
{
    return amount;
}

void projects::setName(string n)
{
    name = n;
}

void projects::setCapacity(int i)
{
    capacity = i;
}
