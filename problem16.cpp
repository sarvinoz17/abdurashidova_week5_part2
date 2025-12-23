#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double monthlyRent = 1000.0;
    double annualRent;
    double totalFiveYears = 0.0;
    const double increaseRate = 0.03;
    cout << fixed << setprecision(2);

    for (int year = 1; year <= 5; year++) {
        annualRent = monthlyRent * 12;
        totalFiveYears += annualRent;
        cout << "Year " << year 
             << " monthly rent: $" << monthlyRent << endl;
        cout << "Total rent for year " << year 
             << ": $" << annualRent << endl << endl;
        monthlyRent += monthlyRent * increaseRate;}

    cout << "Total rent paid for 5 years: $" 
         << totalFiveYears << endl;

    return 0;}