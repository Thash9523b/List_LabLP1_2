#include <iostream>

#include "PorHora.h"
#include "Assalariado.h"

#include <string>
using namespace std;

int main()
{
    Trabalhador *t1 = new PorHora("Ingrid Ferreira", 45);
    Trabalhador *t2 = new Assalariado("Gabriela Logrado", 5250);

    cout << "Nome: " << t1->getNome() << "\nSemana: " << t1->calculaPagamentoSemanal(30)
         << "\nSalario: " << t1->getSalario() << endl << endl;
    cout << "Nome: " << t2->getNome() << "\nSemana: " << t2->calculaPagamentoSemanal(30)
         << "\nSalario: " << t2->getSalario() << endl << endl;

    return 0;
}
