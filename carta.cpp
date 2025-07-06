// carta.cpp
#include "carta.h"

std::string Carta::toString() const {
    return NOMBRE_VALORES[valor] + NOMBRE_PALOS[palo];
}