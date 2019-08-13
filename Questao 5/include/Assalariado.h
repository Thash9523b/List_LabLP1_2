#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Trabalhador.h"
#include <string>

using namespace std;


class Assalariado : public Trabalhador
{
    public:
        Assalariado();
        Assalariado(string nome, double salario);

        double calculaPagamentoSemanal(int horas);
};

#endif // ASSALARIADO_H
