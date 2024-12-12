#include <memory>
#include <iostream>

using namespace std;

int main() {
    unique_ptr <int> ptr1 = make_unique<int>(1);
    return 0;
}