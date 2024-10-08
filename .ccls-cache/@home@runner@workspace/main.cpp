#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // Generate two random numbers between 100 and 999
    int num1 = rand() % 900 + 100;  // Range [100, 999]
    int num2 = rand() % 900 + 100;  // Range [100, 999]

    // Display the two numbers
    cout << "Solve the following problem: " << endl;
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;

    // Pause the screen (wait for user input)
    cout << "\nPress Enter when you're ready to see the answer...";
    cin.get();  // Waits for the user to press Enter

    // Display the correct solution
    int sum = num1 + num2;
    cout << "\nThe correct answer is: " << endl;
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "------" << endl;
    cout << "  " << sum << endl;

    return 0;
}