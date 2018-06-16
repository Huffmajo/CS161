/*********************************************************************
 *** Author: Joel Huffman
 *** Date: 09/27/2017
 *** Description: Calculate fewest number of coins from an amount less than a dollar
 **********************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main() {
    //define variables and constants
    int changeAmount, quarters, dimes, nickels, pennies;
    const int QUARTER_VALUE = 25;
    const int DIME_VALUE = 10;
    const int NICKEL_VALUE = 5;
    
    //prompt user for an amount in cents < $1
    cout << "Please enter an amount in cents less than a dollar.\n";
    
    //store that amount of cents
    cin >> changeAmount;
    
    //compute change
    //See how many whole quarters can go into change amount
    quarters = changeAmount / QUARTER_VALUE;
    
    //set change amount to remainder
    changeAmount %= QUARTER_VALUE;
    
    //See how many whole dimes can go into change amount
    dimes = changeAmount / DIME_VALUE;
    
    //set change amount to remainder again
    changeAmount %= DIME_VALUE;
    
    //See how many whole nickels can go into change amount
    nickels = changeAmount / NICKEL_VALUE;
    
    //set change amount to remainder once more
    changeAmount %= NICKEL_VALUE;
    
    //remainder is the number of pennies left
    pennies = changeAmount;
    
    //print out results
    cout << "Your change will be:\n";
    cout << "Q: " << quarters << endl;
    cout << "D: " << dimes << endl;
    cout << "N: " << nickels << endl;
    cout << "P: " << pennies << endl;
    return 0;
}
