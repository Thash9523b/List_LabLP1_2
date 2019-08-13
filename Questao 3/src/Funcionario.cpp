#include "Funcionario.h"
#include <string>

using namespace std;

Funcionario::Funcionario()
{
    nome = " ";
    salario = matricula = 0;
}

Funcionario::Funcionario(string nome, int matricula, double salario)
{
    setNome(nome);
    setMatricula(matricula);
    setSalario(salario);
}

void Funcionario::setNome(string nome)
{
    this->nome = nome;
}

void Funcionario::setMatricula(int matricula)
{
    if (matricula>0)
        this->matricula = matricula;
    else
        this->matricula = 0;
}

void Funcionario::setSalario(double salario)
{
    if(salario>0)
        this->salario = salario;
    else
        this->salario = 0;
}

string Funcionario::getNome()
{
    return nome;
}

int Funcionario::getMatricula()
{
    return matricula;
}

double Funcionario::getSalario()
{
    return salario;
}

double Funcionario::getSalario(float percentual)
{

}
