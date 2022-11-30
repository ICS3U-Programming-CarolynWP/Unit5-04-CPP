// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/11/30
// Gets the user input for a calculation symbol and
// Two numbers. Uses IF ELSE statements in another function
// To calculate the answer depending on the symbol used. Returns
// This back to main().

#include <cmath>
#include <iostream>
#include <string>

// To calculate the mark
double calculation(char symbol, float userNumber1, float userNumber2) {
    // Calculation variable
    float calculation = 0;

    // IF ELSE statement to choose the proper calculation
    if (symbol == '+') {
        float calculation = userNumber1 + userNumber2;
        return calculation;
    } else if (symbol == '-') {
        float calculation = userNumber1 - userNumber2;
        return calculation;
    } else if (symbol == '*') {
        float calculation = userNumber1 * userNumber2;
        return calculation;
    } else if (symbol == '/') {
        float calculation = userNumber1 / userNumber2;
        return calculation;
    } else if (symbol == '%') {
        float calculation = fmod(userNumber1, userNumber2);
        return calculation;
    } else {
        std::cout << "Please enter a valid symbol!";
        return calculation;
    }
}

int main() {
    // Variables for the symbol and numbers user input, as well as
    // The answer calculation
    char symbolUserInput;
    std::string numberUserInput1String, numberUserInput2String;
    float numberUserInput1, numberUserInput2;

    // Title of the program
    std::cout << "Calculator\n";

    // User input for the symbol and numbers
    std::cout << "Please enter the calculation sign (+,-,*,/,%): ";
    std::cin >> symbolUserInput;
    std::cout << "Enter the first number: ";
    std::cin >> numberUserInput1String;
    std::cout << "Enter the second number: ";
    std::cin >> numberUserInput2String;

    // Try Catch to make sure the number inputs are valid number
    try {
        numberUserInput1 = stof(numberUserInput1String);
        numberUserInput2 = stof(numberUserInput2String);

        // IF statement to make sure the symbol input is right
        if (symbolUserInput == '+' || symbolUserInput == '-' ||
        symbolUserInput == '*' || symbolUserInput == '/'
        || symbolUserInput == '%') {
            float answer;
            answer = calculation(symbolUserInput, numberUserInput1,
            numberUserInput2);
            // Displaying the answer
            std::cout << numberUserInput1 << " " << symbolUserInput << " "
            << numberUserInput2
            << " = " << answer << "\n";

            // ELSE to display to the user to enter a valid sign
        } else {
            std::cout << "Please enter one of the 5 symbols! \n";
        }
        // Telling the user to enter a valid number
    } catch (std::invalid_argument) {
        std::cout << "Please enter a valid number! \n";
    }
}
