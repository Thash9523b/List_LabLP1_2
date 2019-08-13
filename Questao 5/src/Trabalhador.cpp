#include "Trabalhador.h"
#include <string>
using namespace std;

Trabalhador::Trabalhador()
{
    nome = " ";
    salario = 0;
}
void Trabalhador::setNome(string nome)
{
   this->nome = nome;
}

void Trabalhador::setSalario(double salario)
{
    if(salario>0)
        this->salario = salario;
    else
        this->salario = 0;
}

string Trabalhador::getNome()
{
    return nome;
}

double Trabalhador::getSalario()
{
    return salario;
}

double Trabalhador::calculaPagamentoSemanal(int horas)
{
    return -1;
}

void Trabalhador::setValorHora(double valorHora)
{

}

double Trabalhador::getValorHora()
{
    return -1;
}
