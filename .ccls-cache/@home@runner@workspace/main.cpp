#include <iostream>
#include <iomanip>
#include <cmath>  // For the pow() function
using namespace std;

int main() {
    // Variables to store user input
    double principal, rate;
    int timesCompounded;

    // Ask the user for input
    cout << "Enter the principal: $";
    cin >> principal;

    cout << "Enter the interest rate (as a percentage): ";
    cin >> rate;

    cout << "Enter the number of times the interest is compounded per year: ";
    cin >> timesCompounded;

    // Convert the interest rate from percentage to decimal
    rate = rate / 100;

    // Calculate the amount in savings after 1 year using the compound interest formula
    double amount = principal * pow(1 + (rate / timesCompounded), timesCompounded * 1);

    // Calculate the interest earned
    double interest = amount - principal;

    // Set the output formatting
    cout << fixed << setprecision(2);

    // Display the report
    cout << "Interest Rate:        " << (rate * 100) << "%" << endl;
    cout << "Times Compounded:     " << timesCompounded << endl;
    cout << "Principal:            $" << principal << endl;
    cout << "Interest:             $" << interest << endl;
    cout << "Amount in Savings:    $" << amount << endl;

    return 0;
}