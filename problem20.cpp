#include <iostream>
using namespace std;

int main() {
    int steps;
    double pi;
    cout << "Approximating Pi using Leibniz series:\n";
    for (steps = 10000; steps <= 100000; steps += 10000) {
        pi = 0.0;
        for (int i = 0; i < steps; i++) {
            pi += ( (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1) );}
        pi *= 4; 
        cout << "i = " << steps << ", Pi ≈ " << pi << endl;}

    return 0;}