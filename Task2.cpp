//Sum of two integers
#include <iostream>
using namespace std;

void convert();

int main() {
    convert();
    return 0;
}

void convert() {
    int celsius, fahrenheit;
    cout << "Please enter the temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9 / 5) + 32;
    cout << "Temperature in fahrenheit is: " << fahrenheit;
}
