/********************************************************************* 
*** Author: Joel Huffman
*** Date: 09/20/2017
*** Description: Get individual garden costs and return their sum
**********************************************************************/ 

#include <iostream>
using namespace std;

//get user input of garden costs and print the sum of these costs.
int main() {
    //define variables
    double soilCost, seedCost, fenceCost, totalCost;
    
    //get the cost of the soil
    cout << "What does the soil cost?" << endl;
    cin >> soilCost;

    //get the cost of the seeds
    cout << "What do the flower seeds cost?" << endl;
    cin >> seedCost;
    
    //get the cost of the fence
    cout << "What does the fence cost?" << endl;
    cin >> fenceCost;
    
    //add all the costs together
    totalCost = soilCost + seedCost + fenceCost;
    
    //print the total cost
    cout << "The total cost is " << totalCost << endl;
    return 0;
}
