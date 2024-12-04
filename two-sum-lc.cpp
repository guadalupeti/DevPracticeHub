#include <iostream>
#include <vector>

using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> answ = {0};
    for (int c = 0; c < nums.size(); c++) {
        for (int i = c + 1; i < nums.size() - 1; i++){
            if (nums[c] + nums[i] == target) {
                answ = {c, i};
            }
        }
    }
    return answ;
}

void teste(vector<int>& nums, int target) {
    vector<int> answ = {0};
    for (int c = 0; c < nums.size(); c++) {
        for (int i = c + 1; i < nums.size() - 1; i++){
            if (nums[c] + nums[i] == target) {
                answ = {c, i};
                
            }
        }
    }
    for (int x = 0; x < answ.size(); x++) {
        cout << x;
    }
}

int main() {
    vector<int> numeros = {2,7,11,15};

    teste(numeros, 9);

    return 0;
}