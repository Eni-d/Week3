#include <iostream>
using namespace std;

void school_checker(int year);

int main() {
    school_checker(2023);
    return 0;
}

void school_checker (int year) {
    cout << "Please enter the year: ";
    cin >> year;

    if (year > 2023) {
        cout << "You have " << (year - 2023) << " years remaining.";
    } 

    else if(year < 2023) {
        cout << "You must have graduated already.";
    } 

    else if (year == 2023) {
        cout << "You will graduate this year.";
    }  
}
 
