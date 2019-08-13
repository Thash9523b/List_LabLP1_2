#include "Consultor.h"

Consultor::Consultor()
{
    nome = " ";
    matricula = salario = 0;
}

Consultor::Consultor(string nome, int matricula, double salario)
{
    setNome(nome);
    setMatricula(matricula);
    setSalario(salario);
}

double Consultor::getSalario()
{
    return salario + (salario * 0.1);
}

double Consultor::getSalario(float percentual)
{
    return salario + (salario * (percentual/100));
}
