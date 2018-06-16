/*********************************************************************
 ** Author: Joel Huffman
 ** Date: 10/7/2017
 ** Description: This program gets a user supplied number of integers
 ** and prints out the maximum and minimum values of those integers
 *********************************************************************/

#include <iostream>
using std::cout;
using std::cin;


int main()
{
    int number_of_integers;
    int user_integer;
    int min;
    int max;
 
    //get number of integers to gather from user
    cout << "How many integers would you like to enter?\n";
    cin >> number_of_integers;
    
    cout << "Please enter " << number_of_integers << " integers.\n";
    
    for (int i = 0; i < number_of_integers; i++)
    {
        cin >> user_integer;
        
        //set max and min to first integer gathered
        if (i == 0)
        {
            max = user_integer;
            min = user_integer;
        }
    
        //if newly received integer is the smallest we've seen
        //replace min with this value
        if (user_integer < min)
        {
            min = user_integer;
        }
        
        //if newly received integer is the largest we've seen
        //replace max with this value
        else if (user_integer > max)
        {
            max = user_integer;
        }
    }
    
    //print out the max and min values
    cout << "min: " << min << "\n";
    cout << "max: " << max << "\n";
    
    return 0;
}
