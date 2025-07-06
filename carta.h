// carta.h
#ifndef ___CARTA_H___
#define ___CARTA_H___

#include <string>

enum Palo { CORAZONES, DIAMANTES, TREBOLES, PICAS };
const std::string NOMBRE_PALOS[] = { "♥", "♦", "♣", "♠" };
const std::string NOMBRE_VALORES[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" };

struct Carta {
    int valor;     // 0 a 12 (2 a A)
    Palo palo;     // 0 a 3

    std::string toString() const;
};

#endif
