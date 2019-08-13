#include "Endereco.h"
#include <string>
#include <sstream>

using namespace std;

Endereco::Endereco()
{
    num = 0;
    rua = bairro = cidade = estado = CEP = " ";
}

Endereco::Endereco(string rua, int num, string bairro, string cidade, string estado, string CEP)
{
    setRua(rua);
    setNum(num);
    setBairro(bairro);
    setCidade(cidade);
    setEstado(estado);
    setCEP(CEP);
}

void Endereco::setRua(string rua)
{
    this->rua = rua;
}

void Endereco::setNum(int num)
{
    this->num = num;
}

void Endereco::setBairro(string bairro)
{
    this->bairro = bairro;
}

void Endereco::setCidade(string cidade)
{
    this->cidade = cidade;
}

void Endereco::setEstado(string estado)
{
    this->estado = estado;
}

void Endereco::setCEP(string CEP)
{
    this->CEP = CEP;
}

string Endereco::getRua()
{
    return rua;
}

int Endereco::getNum()
{
    return num;
}

string Endereco::getBairro()
{
    return bairro;
}

string Endereco::getCidade()
{
    return cidade;
}

string Endereco::getEstado()
{
    return estado;
}

string Endereco::getCEP()
{
    return CEP;
}


string Endereco::toString()
{
    stringstream resumo;

    resumo << "Numero: " << num << "\nRua: " << rua << "\nBairro: " << bairro <<
              "\nEstado: " << estado << "\nCidade: " << cidade << "\nCEP: " << CEP << endl;

    return resumo.str();
}

