#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numCards;

    cin >> numCards;
    vector<int> cards(numCards);

    for (int i = 0; i < numCards; i++) {
        cards[i] = numCards - i;
    }

    vector<int> discarded(numCards - 1);

    while (cards.size() > 1) {
        discarded.push_back(cards.back());
        cards.pop_back();

        int temp = cards.back();
        for (int c = cards.size() - 1; c > 0; c--) {
            cards[c] = cards[c-1];

        }
        cards[0] = temp;

    }



    cout << "[";
    for (int i = 0; i < cards.size(); i++) {
        if (i == cards.size() - 1) {
            cout << cards[i];
            break;
        }
        cout << cards[i] << ",";
    }
 
    cout << "] ";


    cout << "[";
    for (int i = 0; i < discarded.size(); i++) {
        if (discarded[i] != 0) {

            if (i == discarded.size() - 1) {
                cout << discarded[i];
                break;
            }
            cout << discarded[i] << ",";
        } 

    }
    cout << "]";


    
    return 0;
}