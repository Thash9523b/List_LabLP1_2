#include "Assalariado.h"

Assalariado::Assalariado()
{
    nome = " ";
    salario = 0;
}

Assalariado::Assalariado(string nome, double salario)
{
    setNome(nome);
    setSalario(salario);
}

double Assalariado::calculaPagamentoSemanal(int horas)
{
    return salario/4;
}
