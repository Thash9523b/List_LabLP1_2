#include "PorHora.h"
#include <string>
using namespace std;

PorHora::PorHora()
{
    nome = " ";
    salario = 0;
}

PorHora::PorHora(string nome, double valorHora)
{
    setNome(nome);
    setValorHora(valorHora);
    setSalario(0);
}

void PorHora::setValorHora(double valorHora)
{
    if(valorHora>0)
        this->valorHora = valorHora;
    else
        this->valorHora = 0;
}

double PorHora::getValorHora()
{
    return valorHora;
}

double PorHora::calculaPagamentoSemanal(int horas)
{
    double semana = 0;

    if(horas>40){
        horas -= 40;

        semana += 40 * valorHora;
        semana += (horas * 1.5) * valorHora;
    }else{
        semana += horas * valorHora;
    }

    salario = semana * 4;

    return semana;
}
