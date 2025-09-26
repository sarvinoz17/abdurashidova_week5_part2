#include <iostream>
using namespace std;

int main() {
    int number;
    int countPositive = 0;
    int countNegative = 0;
    int countAll = 0;
    double total = 0;

    cout << "Enter integers (input ends if it is 0): ";

    while (true) {
        cin >> number;

        if (number == 0) {
            break;
        }

        if (number > 0) {
            countPositive++;
        } else {
            countNegative++;
        }

        total += number;
        countAll++;
    }

    if (countAll == 0) {
        cout << "No numbers are entered except 0." << endl;
    } else {
        cout << "The number of positives is " << countPositive << endl;
        cout << "The number of negatives is " << countNegative << endl;
        cout << "The total is " << total << endl;
        cout << "The average is " << total / countAll << endl;
    }

    return 0;
}