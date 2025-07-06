// jugador.h
#ifndef ___JUGADOR_H___
#define ___JUGADOR_H___

#include "carta.h"
#include <string>
#include <vector>

class Jugador {
private:
    std::string nombre;
    int stack;
    std::vector<Carta> mano;
    bool activo; // true si no ha hecho fold

public:
    Jugador(const std::string& nombre, int stackInicial);

    void recibirCarta(const Carta& c);
    void mostrarMano() const;

    std::string getNombre() const;
    int getStack() const;
    bool estaActivo() const;

    void hacerFold();
    void apostar(int cantidad);
    void ganarPozo(int cantidad);

    void resetMano();
};

#endif