#include <iostream>
using namespace std;

class Animal {
    public:
    virtual void makeSound() {
        cout << "Generic sound";
    }
};

class Dog : public Animal {
    public:
    void makeSound() override {
        cout << "Woof woof";
    }
};

int main() {
    Dog* test = new Dog();
    test->makeSound();
    delete test;
}