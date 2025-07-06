// jugador.cpp
#include "jugador.h"
#include <iostream>

Jugador::Jugador(const std::string& nombre, int stackInicial)
    : nombre(nombre), stack(stackInicial), activo(true) {}

void Jugador::recibirCarta(const Carta& c) {
    mano.push_back(c);
}

void Jugador::mostrarMano() const {
    std::cout << nombre << " (" << stack << " fichas): ";
    for (const Carta& c : mano) {
        std::cout << c.toString() << "  ";
    }
    std::cout << std::endl;
}

std::string Jugador::getNombre() const {
    return nombre;
}

int Jugador::getStack() const {
    return stack;
}

bool Jugador::estaActivo() const {
    return activo;
}

void Jugador::hacerFold() {
    activo = false;
}

void Jugador::apostar(int cantidad) {
    if (cantidad <= stack) {
        stack -= cantidad;
    }
}

void Jugador::ganarPozo(int cantidad) {
    stack += cantidad;
}

void Jugador::resetMano() {
    mano.clear();
    activo = true;
}