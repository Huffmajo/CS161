/*********************************************************************
 ** Author: Joel Huffman
 ** Date: 10/7/2017
 ** Description: This program gets an integer from the user. Then the user
 ** guesses this value until they get it correct. Hints tell the user if
 ** their guesses are too high or too low.
 *********************************************************************/

#include <iostream>
using std::cin;
using std::cout;

int main() {
    
    int correct;
    int guess;
    int tries = 1;
    
    //get the correct integer from the user
    cout << "Enter the number for the player to guess.\n";
    cin >> correct;
    
    cout << "Enter your guess.\n";
    //get users guess and increment try count
    cin >> guess;
    
    while (guess != correct)
    {
        if (guess > correct)
        {
            cout << "Too high - try again.\n";
        }
        
        else
        {
            cout << "Too low - try again.\n";
        }
        
        //get users guess for next loop and increment try count again
        cin >> guess;
        tries++;
        
    }
 
    cout << "You guessed it in " << tries << " tries.\n";
    
    return 0;
}
