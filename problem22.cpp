#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Miles" << setw(15) << "Kilometers" << endl;
    for (int miles = 1; miles <= 10; miles++) {
        double kilometers = miles * 1.609;
        cout << miles << setw(15) << fixed << setprecision(3)
             << kilometers << endl;}

    return 0;}