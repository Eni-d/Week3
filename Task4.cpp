#include <iostream>
#include <cmath>
using namespace std;

void sign_check();

int main() {
    sign_check();
    return 0;
}

void sign_check(){
    int number;
    cout << "Please enter the number: ";
    cin >> number;
    if (signbit(number)){
        cout << "The number is negative";
    } else {
        cout << "The number is positive";
    }
}
 
