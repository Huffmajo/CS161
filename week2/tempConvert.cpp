/*********************************************************************
 *** Author: Joel Huffman
 *** Date: 09/27/2017
 *** Description: Convert temperature from Celsius to Fahrenheit
 **********************************************************************/

#include <iostream>
using std::cout;
using std::cin;

int main() {
    //define variables
    double celsiusTemp, fahrenheitTemp;
    
    //prompt user for input
    cout << "Please enter a Celsius temperature.\n";
    
    //get the celsius temperature
    cin >> celsiusTemp;
    
    //convert the temperature to Fahrenheit
    fahrenheitTemp = (celsiusTemp * 9)/5 + 32;
    
    //print out Fahrenheit temperature
    cout << "The equivalent Fahrenheit temperature is:\n" << fahrenheitTemp;
    
    return 0;
}
