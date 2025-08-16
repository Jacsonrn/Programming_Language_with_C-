#include <iostream>
#include <cstdio> // Necessário para usar printf
#define PI 3.141592
//Programa para determinar o volume de uma esfera de raio 5 cm.
int main() {
    double volume, raio;
    raio = 5.0; // Raio da esfera em cm
    volume = (4.0 / 3.0) * PI * raio * raio * raio; // Fórmula do volume da esfera

    // A mesma linha escrita com printf. Note o uso dos especificadores de formato %.1f e %.2f.
    printf("O volume da esfera de raio %.1f cm eh: %.2f cm³\n", raio, volume);
    return 0;
}