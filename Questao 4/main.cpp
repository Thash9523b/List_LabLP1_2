#include <iostream>

#include "Triangulo.h"
#include "Circulo.h"
#include "Quadrado.h"

using namespace std;

int main()
{
    FiguraGeometrica *t1 = new Triangulo(5, 3);
    FiguraGeometrica *c1 = new Circulo(8);
    FiguraGeometrica *q1 = new Quadrado(4);

    cout << "Nome da Figura: " << c1->getNome() << "\nArea: " << c1->CalculaArea() << endl;
    cout << "Nome da Figura: " << q1->getNome() << "\nArea: " << q1->CalculaArea() << endl;
    cout << "Nome da Figura: " << t1->getNome() << "\nArea: " << t1->CalculaArea() << endl;

    return 0;
}
