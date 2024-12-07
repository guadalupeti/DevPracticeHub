#include <iostream>
#include <string>

using namespace std;

class Person {
    public:
        string name;
        int age;

        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        int getIdade() {
            return age;
        }
};

class Student : public Person {
    public:
        float grade;
        Student(string n, int a, int grade) : Person(n,a) {
            this -> grade = grade;
        }

        float getGrade(){
            return grade;
        }
};

int main() {
    Person teste = Person("joao", 12);
    Student teste1 = Student("joao", 12, 9);
    cout << teste.getIdade();
    cout << teste1.getGrade();
    return 0;
}