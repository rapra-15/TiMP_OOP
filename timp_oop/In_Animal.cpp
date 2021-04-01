#include "Animal.h"
#include "Fish.h"
#include "Bird.h"

Animal* Animal::In(ifstream& ifst) {
    Animal* An;
    int K;
    ifst >> K;
    if (K == 1)
    {
        An = new Fish;
    }
    else if (K == 2)
    {
        An = new Bird;
    }
    else
    {
        return 0;
    }

    An->In_Data(ifst); //выделяем память указателю животного, понимаем за какое животное отвечает сейчас указатель

    return An;
}