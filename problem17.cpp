#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;
    cout << "Input: ";
    cin >> number;
    int temp = number;
    while (temp != 0) {
        sum += temp % 10;   
        temp /= 10;}
    cout << "The sum of digits is " << sum << endl;

    return 0;}