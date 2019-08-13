#ifndef PESSOA_H
#define PESSOA_H
#include "Endereco.h"
#include <string>
#include <sstream>
using namespace std;

class Pessoa
{
    public:
        Pessoa();
        Pessoa(string nome, string telefone, Endereco endereco);

        void setNome(string nome);
        void setEndereco(Endereco endereco);
        void setTelefone(string telefone);

        string getNome();
        Endereco getEndereco();
        string getTelefone();

        string toString();

    protected:

    private:
        string nome, telefone;
        Endereco endereco;

};

#endif // PESSOA_H
