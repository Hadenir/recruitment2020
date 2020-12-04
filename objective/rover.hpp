#pragma once

#include <string>

// Praca domowa:
// Utworzyc klase Sirius, pochodna od IRover, ktora zaimplementuje ten interfejs.
// Program ma byc podzielony na pliki (definicja i implementacja klasy oraz main() w oddzielnych plikach).
// W funkcji main() zaprezentowac w dowolny sposob dzialanie wszystkich metod.

class IRover
{
public:
    // Klasa pochodna ma miec konstruktor. Lazik jest tworzony w stanie 'wylaczonym'
    // W klasie pochodnej nalezy utworzyc odpowienie pole do zapamietania stanu.
    IRover(const std::string& name)
        : m_name(name)
    {}

    // Funkcja uruchamia lazik. Dopoki jest on w stanie 'wylaczonym'
    // metody drive(), set_speed() nie dzialaja.
    virtual void start() = 0;

    // Funkcja wylacza lazik - przechodzi on do stanu 'wylaczonego'.
    virtual void stop() = 0;

    // Funkcja ustawia predkosc lazika zgodnie z podanym parameter.
    // W klasie pochodnej nalezy utworzyc odpowienie pole do zapamietania predkosci.
    virtual void set_speed(float speed) = 0;

    // Funckja zwraca aktualnie ustawiona predkosc lazika.
    virtual float speed() const = 0;

    // Lazik jedzie przez okreslony czas prosto z obecnie ustalona predkoscia.
    // Funkcja aktualizuje przebyty przez lazik dystans.
    // W klasie pochodnej nalezy utworzyc odpowienie pole do zapamietania dystansu.
    virtual void drive(float time) = 0;

    // Funkcja zwraca przebyty przez lazika do tej pory dystans.
    virtual float distance() const = 0;

    // Funckja wypisuje na standardowe wyjscie informacje o laziku w formacie:
    // <nazwa>(<stan>,<predkosc>,<przejechany_dystanst>)
    virtual void print() const = 0;

protected:
    std::string m_name;
};
