#include <iostream>
#include <vector>

using namespace std;

void rotateVector(vector<int>& vec, int k) {
    vector <int> resp(vec.size());
    int inicio = vec.size() - k;
    int cont = 0;
    

    for (int i = inicio; i < vec.size(); i++) {
        resp[cont] = vec[i];
        cont++;
    }

    for (int x = 0; x < vec.size() - k; x++) {
        resp[cont] = vec[x];
        cont++;
    }

    for (int y = 0; y < vec.size(); y++) {
        cout << resp[y];
    }
}

int main() {
    
    vector <int> teste;

    for (int i = 1; i < 6; i++) {
        teste.push_back(i);
    }

    rotateVector(teste, 2);
    return 0;
}