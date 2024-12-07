#include <iostream>
using namespace std;

class Person {
    private:
        int idade;
    public:
        Person(int idade) {
            this->idade = idade;
        }

        int getIdade() {
            return idade;
        }

        void setIdade(int i) {
            this->idade = i;
        }
};

int main() {
    Person teste = Person(12);
    cout << teste.getIdade();

    teste.setIdade(14);
    cout << teste.getIdade();
}