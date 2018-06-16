/*********************************************************************
 ** Author: Joel Huffman
 ** Date: 10/7/2017
 ** Description: This program reads a user provided text file full of integers 
 ** and creates a .txt file with the sum of these integers. It then prints on
 ** success of the procedure.
 *********************************************************************/

//This program takes user input and sends it to a .txt file
#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::ifstream;
using std::ofstream;
using std::string;

int main ()
{
    string fileName;
    int value = 0;
    int sum = 0;
    
    
    //get filename to read from user
    cout << "Please enter your filename.\n";
    cin >> fileName;
    
    //open input file that user provided
    ifstream inputFile(fileName);
    if (inputFile)
    {
        while (inputFile >> value)
        {
            sum += value;
        }
        
        //let user know output file was successful
        cout << "result written to sum.txt";
    }
    else
    {
        //let user know file was not found
        cout << "could not access file";
    }
    
    
    ofstream outputFile("sum.txt");
    outputFile << sum;
    
    inputFile.close();
    outputFile.close();
    
    return 0;
}
