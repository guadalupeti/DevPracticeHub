#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    for (int c = 1; c <= n; c++) {
        cout << c << " " << c*c << " " << c*c*c << endl;
        cout << c << " " << c*c+1 << " " << c*c*c+1 << endl;
    }

    return 0;
}