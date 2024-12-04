#include <iostream>

using namespace std;

int main() {

    int cards[50];
    int discarded[50];
    int limit;
    int c = 0;
    cin >> limit;

    for (int i = 0; i < limit; i++) {
        cards[i] = limit - i;
        cout << cards[i];
    }

    cout << endl;

    while (1) {
        if (limit == 1) {
            break;
        }
        int temp = cards[limit - 1];
        cards[limit - 1] = 0;
        for (int x = limit - 1; x > 0; x--) {
            cards[x] = cards[x - 1];
        }
        limit--;
        cards[0] = cards[limit];
        discarded[c] = temp;
        c++;
        
    }

    for (int y = 0; y < limit; y++) {
        cout << endl << cards[y] << endl;
    }

    for (int y = 0; y < c; y++) {
        cout << discarded[y] << " ";
    }
    

    return 0;
}