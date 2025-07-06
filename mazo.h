// mazo.h
#ifndef ___MAZO_H___
#define ___MAZO_H___

#include "carta.h"
#include <vector>
#include <random>

class Mazo {
private:
    std::vector<Carta> cartas;
    int indiceActual;

public:
    Mazo();
    void barajar();
    Carta repartir();
    bool vacio() const;
};

#endif
