#include <iostream>
#include <list>

using namespace std;

void reorderList(std::list<int>& lst) {
    for (int x: lst){
        if (x % 2 != 0) {
            cout << x;
        }
    }
    for (int x: lst){
        if (x % 2 == 0) {
            cout << x;
        }
    }
}

int main() {
    list <int> teste = {1,2,3,4,5,6};
    reorderList(teste);
    return 0;
}