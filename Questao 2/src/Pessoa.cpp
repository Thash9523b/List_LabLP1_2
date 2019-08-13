#include "Pessoa.h"

Pessoa::Pessoa()
{
    nome = telefone = " ";
    endereco = Endereco();
}

Pessoa::Pessoa(string nome, string telefone, Endereco endereco)
{
    setNome(nome);
    setTelefone(telefone);
    setEndereco(endereco);
}

void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

void Pessoa::setEndereco(Endereco endereco)
{
    this->endereco = endereco;
}

void Pessoa::setTelefone(string telefone)
{
    this->telefone = telefone;
}

string Pessoa::getNome()
{
    return nome;
}

Endereco Pessoa::getEndereco()
{
    return endereco;
}

string Pessoa::getTelefone()
{
    return telefone;
}

string Pessoa::toString()
{
    stringstream resumo;

    resumo << "Nome: " << nome << endl << endereco.toString() << "Telefone: " << telefone << endl;

    return resumo.str();
}

