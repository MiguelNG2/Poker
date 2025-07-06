// main.cpp
#include <iostream>
#include "mazo.h"
#include "jugador.h"
#include <vector>

int main() {
    Mazo mazo;
    std::vector<Jugador> jugadores;

    for (int i = 1; i <= 6; ++i) {
        jugadores.emplace_back("Jugador " + std::to_string(i), 1000);
    }

    for (auto& jugador : jugadores) {
        jugador.resetMano();
        jugador.recibirCarta(mazo.repartir());
        jugador.recibirCarta(mazo.repartir());
    }

    std::cout << "Cartas de cada jugador:\n\n";
    for (const auto& jugador : jugadores) {
        jugador.mostrarMano();
    }

    std::cout << "\nFlop: ";
    std::cout << mazo.repartir().toString() << "  ";
    std::cout << mazo.repartir().toString() << "  ";
    std::cout << mazo.repartir().toString() << std::endl;

    std::cout << "Turn: " << mazo.repartir().toString() << std::endl;
    std::cout << "River: " << mazo.repartir().toString() << std::endl;

    return 0;
}
