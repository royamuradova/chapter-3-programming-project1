#include <iostream>
using namespace std;

int main() {
    // Declare the base quantities for 48 cookies
    const double sugarFor48Cookies = 1.5;  // in cups
    const double butterFor48Cookies = 1.0;  // in cups
    const double flourFor48Cookies = 2.75;  // in cups
    const int cookiesPerBatch = 48;

    // Variable to store the number of cookies the user wants to make
    int desiredCookies;

    // Ask the user how many cookies they want to make
    cout << "How many cookies do you want to make? ";
    cin >> desiredCookies;

    // Calculate the ratio of desired cookies to 48 cookies
    double ratio = static_cast<double>(desiredCookies) / cookiesPerBatch;

    // Adjust the ingredients based on the ratio
    double sugarNeeded = sugarFor48Cookies * ratio;
    double butterNeeded = butterFor48Cookies * ratio;
    double flourNeeded = flourFor48Cookies * ratio;

    // Output the required quantities
    cout << "To make " << desiredCookies << " cookies, you will need:" << endl;
    cout << sugarNeeded << " cups of sugar" << endl;
    cout << butterNeeded << " cups of butter" << endl;
    cout << flourNeeded << " cups of flour" << endl;

    return 0;
}