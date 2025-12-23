#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n <= 1) {
        cout << "No prime factors for " << n << endl;
        return 0;}

    cout << "Prime factors: ";
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) { 
            cout << i;
            n /= i;
            if (n != 1) cout << ".";}
    }

    cout << endl;
    return 0;}