#include <iostream>
using namespace std;

class IImprimivel {
    public:
    virtual void imprimir() const = 0;
};

class Documento : public IImprimivel {
    public:
    void imprimir() const override {
        cout << "teste";
    }
};

int main() {
    Documento teste = Documento();
    teste.imprimir();
}