#ifndef SELECCION_H_INCLUDED
#define SELECCION_H_INCLUDED

#include <iostream>
using namespace std;

class Seleccion {
private:
    string nombre;
    int puntos;
    int goles;

public:
    Seleccion() {}
    Seleccion(const string& nombre, int puntos, int goles) {
        Seleccion::nombre = nombre;
        Seleccion::puntos = puntos;
        Seleccion::goles = goles;
    }

    void setNombre(const string& valor) { nombre = valor; }
    string getNombre() { return nombre; }

    void setPuntos(int valor) { puntos = valor; }
    int getPuntos() { return puntos; }

    void setGoles(int valor) { goles = valor; }
    int getGoles() { return goles; }

    friend ostream& operator<<(ostream& os, const Seleccion& s) {
        os << "Seleccion(nombre=" << s.nombre << ","
            << "puntos=" << s.puntos << ","
            << "goles=" << s.goles << ")";
        return os;
    }

};


#endif // SELECCION_H_INCLUDED
