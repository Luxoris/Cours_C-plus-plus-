

#include "Pile.h"

#include <iostream>
int main() {

    Pile<int> maPile;

    maPile.empile(5);
    maPile.empile(10);
    std::cout << "Valeur : " << maPile.depile() << std::endl;

    std::cout << "Est vide : " << maPile.estVide() << std::endl;
    maPile.vide();

}