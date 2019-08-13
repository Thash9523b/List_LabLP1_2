#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

using namespace std;

class Funcionario
{
    public:
        Funcionario();
        Funcionario(string nome, int matricula, double salario);

        void setNome(string nome);
        void setMatricula(int matricula);
        void setSalario(double salario);

        string getNome();
        int getMatricula();
        virtual double getSalario();
        virtual double getSalario(float percentual);

    protected:

        string nome;
        int matricula;
        double salario;
};

#endif // FUNCIONARIO_H
