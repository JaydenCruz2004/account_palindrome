#include <iostream>
#include <cstring>
using namespace std;

/*
 * Name: Jayden Cruz
 * Date: November 6, 2024
 * Class: CSC 3110
 * Pledge: I have neither given nor received unauthorized aid on this program.
 * Description: This program simulates an airline account creation and checks if the password is a palindrome using pointers.
 * Input: User provides name, birthdate, password, and PIN.
 * Output: The program tells the user if their password is a palindrome or not.
 */

// Structure to hold the account details
struct Passenger {
    string name;
    string birthdate;
    string password;
    int pin;
};


// this function is  to check if the password is a palindrome or not returns true or false
bool check_Palindrome(const char* password) {
    const char* start = password;
    const char* end = password + strlen(password) - 1;

    // Check characters from both ends towards the center
    while (start < end) {
        if (*start != *end) {
            return false; // Not a palindrome
        }
        start++;
        end--;
    }

    return true; // If it a palindrome
}

// Main function to interact with the user and create an account// runs the guts of the program
int main() {
    Passenger passenger;

    // Display welcome message
    cout << "Welcome to Benito Airlines!" << endl;
    cout << "Please enter your details to create an account." << endl;

    // Get user inputs
    cout << "\nEnter your name: ";
    getline(cin, passenger.name);

    cout << "Enter your birthdate (MM/DD/YYYY): ";
    getline(cin, passenger.birthdate);

    cout << "Enter your password: ";
    getline(cin, passenger.password);

    cout << "Enter your PIN (4 digits): ";
    cin >> passenger.pin;

    // Validate password length (for this example, we assume valid input)
    if (passenger.password.length() < 1) {
        cout << "Invalid password length. Exiting." << endl;
        return 1;
    }

    // Check if the password is a palindrome using the check_Palindrome function
    if (check_Palindrome(passenger.password.c_str())) {
        cout << "Your password is a palindrome!" << endl;
    } else {
        cout << "Your password is not a palindrome." << endl;
    }
    
    // Conclude the account creation and the program
    cout << "Account creation complete.";
        
    
    cout <<"Thank you for choosing Benito Airlines!" << endl;

    return 0;
}
