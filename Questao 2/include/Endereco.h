#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

using namespace std;

class Endereco
{
    public:
        Endereco();
        Endereco(string rua, int num, string bairro, string cidade, string estado, string CEP);


        void setRua(string rua);
        void setNum(int num);
        void setBairro(string bairro);
        void setCidade(string cidade);
        void setEstado(string estado);
        void setCEP(string CEP);

        string getRua();
        int getNum();
        string getBairro();
        string getCidade();
        string getEstado();
        string getCEP();

        string toString();

    protected:

    private:
        string rua, bairro, cidade, estado, CEP;
        int num;
};

#endif // ENDERECO_H
