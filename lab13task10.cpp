#include <iostream>
using namespace std;

int main() {
    number; 
     totalDigits = 0, evenDigits = 0, oddDigits = 0;
    cout << "Enter a number: ";
    cin >> number;
    if (number < 0) {
        number = -number;
    }

    if (number == 0) {
        totalDigits = 1;
        evenDigits = 1;
    } else {
        while (number > 0) {
            int digit = number % 10; 
            totalDigits++;
            if (digit % 2 == 0) {
                evenDigits++;
            } else {
                oddDigits++;
            }
            number /= 10;
        }
    }
    cout << "Total digits: " << totalDigits << endl;
    cout << "Even digits: " << evenDigits << endl;
    cout << "Odd digits: " << oddDigits << endl;

    return 0;
}
