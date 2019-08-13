#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    Endereco e1 = Endereco();

    e1.setNum(749);
    e1.setRua("Joao Cancio da Silva");
    e1.setBairro("Manaira");
    e1.setCidade("Joao Pessoa");
    e1.setEstado("Paraiba");
    e1.setCEP("58038328");

    Endereco e2 = Endereco("Sape", 737, "Manaira", "Joao Pessoa", "Paraiba", "58038329");

    Pessoa p1 = Pessoa("Matheus Martins", "(87)99855-2283", e1);
    Pessoa p2 = Pessoa();

    p2.setNome("Italo Gustavo");
    p2.setEndereco(e2);
    p2.setTelefone("(83)99822-5543");

    cout << p1.toString() << endl;
    cout << p2.toString() << endl;

    return 0;
}
