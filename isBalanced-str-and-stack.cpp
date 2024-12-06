#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isBalanced(const std::string& expression) {

    stack<char> stck;

    for (int i = 0; i < expression.length(); i++) {
       stck.push(expression[i]); 
    }
    char temp = stck.top();

    for (int i = expression.length(); i > 1; i--) {
        stck.pop();
    }

    if ((stck.top() == '(' && temp == ')') || (stck.top() == '{' && temp == '}') || (stck.top() == '[' && temp == ']')) {

        cout << "É regular!";
        return true;
    }
    cout << temp << endl << stck.top();
    cout << "Não é regular.";
    return false;

}

int main() {

    isBalanced("({[a+b]*c}/d)");

    return 0;
}