#ifndef TRABALHADOR_H
#define TRABALHADOR_H

#include <string>

using namespace std;


class Trabalhador
{
    public:
        Trabalhador();

        void setNome(string nome);
        void setSalario(double salario);

        string getNome();
        double getSalario();

        virtual double calculaPagamentoSemanal(int horas);
        virtual void setValorHora(double valorHora);
        virtual double getValorHora();

    protected:
        string nome;
        double salario;

};

#endif // TRABALHADOR_H
