// mazo.cpp
#include "mazo.h"
#include <algorithm>
#include <chrono>
#include <stdexcept>

Mazo::Mazo() {
    for (int v = 0; v < 13; ++v) {
        for (int p = 0; p < 4; ++p) {
            Carta c;
            c.valor = v;
            c.palo = static_cast<Palo>(p);
            cartas.push_back(c);
        }
    }
    indiceActual = 0;
    barajar();
}

void Mazo::barajar() {
    auto seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(cartas.begin(), cartas.end(), std::default_random_engine(seed));
    indiceActual = 0;
}

Carta Mazo::repartir() {
    if (indiceActual < cartas.size()) {
        return cartas[indiceActual++];
    } else {
        throw std::out_of_range("No hay más cartas en el mazo");
    }
}

bool Mazo::vacio() const {
    return indiceActual >= cartas.size();
}