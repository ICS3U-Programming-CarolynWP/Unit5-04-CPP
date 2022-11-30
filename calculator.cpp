// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/11/30
// Gets the user input for a calculation symbol and
// Two numbers. Uses IF ELSE statements in another function
// To calculate the answer depending on the symbol used. Returns
// This back to main().

#include <iostream>
#include <string>

// To calculate the mark
float calculation(char symbol, float userNumber1, float userNumber2) {
    float calculation = 0;

    if (symbol == '+') {
        float calculation = userNumber1 + userNumber2;
    } else if (symbol == '-') {
        float calculation = userNumber1 - userNumber2;
    } else if (symbol == '*') {
        float calculation = userNumber1 * userNumber2;
    } else if (symbol == '/') {
        float calculation = userNumber1 / userNumber2;
    } else if (symbol == '%') {
        double calculation = userNumber1 % userNumber2;
    } else {
        std::cout << "Please enter a valid symbol!";
    }
    return calculation;
}

int main() {
    // Variables for the symbol and numbers user input, as well as
    // The answer calculation
    char symbol, answer;
    std::string numberUserInput1String, numberUserInput2String;
    double numberUserInput1, numberUserInput2;

    // Title of the program
    std::cout << "Calculator\n";

    // Try Catch to make sure the number inputs are valid number
    try {
        numberUserInput1 = stof(numberUserInput1String);
        numberUserInput2 = stof(numberUserInput2String);
        calculation(symbol, numberUserInput1, numberUserInput2);
    }
}
