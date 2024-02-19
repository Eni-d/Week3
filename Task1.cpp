//Sum of two integers
#include <iostream>
using namespace std;

void add();

int main() {
    add();
    return 0;
}

void add() {
    int a, b;
    cout << "Please enter the first number: ";
    cin >> a;
    cout << "Please enter the second number: ";
    cin >> b;
    int sum = a + b;
    cout << "The sum is: " << sum << endl;
}
