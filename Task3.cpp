#include <iostream>
using namespace std;

void even_odd();

int main() {
    even_odd();
    return 0;
}

void even_odd(){
    int number;
    cout << "Please enter the number: ";
    cin >> number;
    if (number%2 == 0){
        cout << "The number is even";
    } else {
        cout << "The number is odd";
    }
}
 
