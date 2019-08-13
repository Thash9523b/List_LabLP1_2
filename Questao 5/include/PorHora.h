#ifndef PORHORA_H
#define PORHORA_H

#include "Trabalhador.h"
#include <string>
using namespace std;

class PorHora : public Trabalhador
{
    public:
        PorHora();
        PorHora(string nome, double valorHora);

        void setValorHora(double valorHora);
        double getValorHora();

        double calculaPagamentoSemanal(int horas);

    private:
        double valorHora;
};

#endif // PORHORA_H
