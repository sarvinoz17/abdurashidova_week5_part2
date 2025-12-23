#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0;
    cout << "Input: ";
    cin >> n;
    cout << "Output: ";
    for (int i = 1; i <= n; i++) {
        cout << "1/" << i;
        if (i < n)
            cout << " + ";
        sum += 1.0 / i;}
    cout << endl;
    cout << "The sum is " << sum << endl;

    return 0;}