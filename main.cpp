/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Brooks McKinley
 */

#include "std_lib_facilities.h"

double getDigit(string prompt);
string getOperation(string prompt);
string getOperationProductName(string operation);
double performOperation(double firstNum, double secondNum, string operation);

int main(void) {
    double firstNum = getDigit("Enter your first number: ");
    double secondNum = getDigit("Enter your second number: ");
    string operation = getOperation("Enter the operation: ");
    string operationProductName = getOperationProductName(operation);
    double result = performOperation(firstNum, secondNum, operation);

    cout << "The " << operationProductName << " of " << firstNum << " and " << secondNum << " is " << result;
}

double getDigit(string prompt) {
    while (true) {
        cout << prompt;
        string response;
        cin >> response;
        // Parse response
        if (response == "one" || response == "1") {
            return 1;
        } else if (response == "two" || response == "2") {
            return 2;
        } else if (response == "three" || response == "3") {
            return 3;
        } else if (response == "four" || response == "4") {
            return 4;
        } else if (response == "five" || response == "5") {
            return 5;
        } else if (response == "six" || response == "6") {
            return 6;
        } else if (response == "seven" || response == "7") {
            return 7;
        } else if (response == "eight" || response == "8") {
            return 8;
        } else if (response == "nine" || response == "9") {
            return 9;
        } else if (response == "zero" || response == "0") {
            return 0;
        } else {
            cout << "Invalid number. Please enter a single digit number." << endl;
        }
    }
}

string getOperation(string prompt) {
    while (true) {
        cout << prompt;
        string response;
        cin >> response;
        // Filter for valid input
        if (response == "+" || response == "-" || response == "*" || response == "/") {
            return response;
        } else {
            cout << "Invalid operation. Please try using +, -, *, or /.";
        }
    }
}

string getOperationProductName(string operation) {
    if (operation == "+") {
        return "sum";
    } else if (operation == "-") {
        return "difference";
    } else if (operation == "*") {
        return "product";
    } else if (operation == "/") {
        return "quotient";
    } else {
        return "invalid";
    }
}

double performOperation(double firstNum, double secondNum, string operation) {
    if (operation == "+") {
        return firstNum + secondNum;
    } else if (operation == "-") {
        return firstNum - secondNum;
    } else if (operation == "*") {
        return firstNum * secondNum;
    } else if (operation == "/") {
        return firstNum / secondNum;
    } else {
        return -1;
    }
}