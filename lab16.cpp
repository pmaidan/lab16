// Polina Maidanova
// Programming Fundamentals
// CS 1436
// 005
// Due Date: 10/30/2024
// Date Completed: 10/24/2024
// Date Submitted: 10/24/2024


// This program calculates the retail price based on the wholesale price and the markup percentage.

#include <iostream> // Header file allowing to work with input/output objects.
#include <iomanip>  // Header file allowing to manipulate the output.
using namespace std;    // Use standard namespace.

void calculateRetail(double, double);   // Function prototype.

int main()  // The main function is the starting point of the program execution.
{
    // Declare the variables for the wholesale price and the markup percentage.
    double wholesalePrice, markupPercentage;

    // Prompt the user to enter the wholesale price and markup percentage.
    cout << "Enter the wholesale price: ";
    cin >> wholesalePrice;  // Store the input in the wholesalePrice variable.

    // Validate the input for the wholesale price.
    while (wholesalePrice < 0.0)    // Check if negative price was entered.
    {
        cout << "Invalid input. Wholesale price must be a positive number. Please try again: "; // Display the error message.
        cin >> wholesalePrice;  // Get the new input.
    }

    // Prompt the user to enter the markup percentage.
    cout << "Enter the markup percentage: ";
    cin >> markupPercentage;    // Store the input in the markupPercentage variable.

    // Validate the input for the markup percentage.
    while (markupPercentage < 0.0)  // Check if negative percentage was entered.
    {
        cout << "Invalid input. Markup percentage must be a positive number. Please try again: ";   // Display the error message.
        cin >> markupPercentage;    // Get the new input.
    }

    // Check if the input was entered in the percentage form and convert it to a decimal form. Otherwise, skip.
    if (markupPercentage > 1.0)
        markupPercentage /= 100.0;

    calculateRetail(wholesalePrice, markupPercentage);  // Call the calculateRetail function.

    return 0;   // Return 0 to indicate the program ended successfully.
}

// Define the function that accepts 2 arguments, calculates and displays the retail price.
void calculateRetail(double num1, double num2)
{
    double retailPrice = num1 + (num1 * num2);  // Calculate the retail price.
    cout << setprecision(2) << fixed;   // Display the resut to 2 decimal places.
    cout << "The retail price is: $" << retailPrice << endl;    // Display the retail price.
}
