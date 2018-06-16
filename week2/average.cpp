/*********************************************************************
 *** Author: Joel Huffman
 *** Date: 09/27/2017
 *** Description: Get 5 numbers from user and print the average of said numbers
 **********************************************************************/

#include <iostream>
using std::cout;
using std::cin;

int main() {
    //define variables
    const double QUANTITY_OF_NUMBERS = 5;
    double num1, num2, num3, num4, num5, sum, average;
    
    //prompt user for input
    cout << "Please enter five numbers. \n";
    
    //gather all the inputted numbers
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;
    
    //sum all the numbers
    sum = num1 + num2 + num3 + num4 + num5;
    
    //compute the average
    average = sum / QUANTITY_OF_NUMBERS;
    
    //print out the average
    cout << "The average of those numbers is:\n" << average;
    
    return 0;
}
