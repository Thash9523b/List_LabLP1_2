#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"


class Consultor : public Funcionario
{
    public:
        Consultor();
        Consultor(string nome, int matricula, double salario);

        double getSalario();
        double getSalario(float percentual);
};

#endif // CONSULTOR_H
