/********************************************************************* 
 * ** Author: Joel Huffman
 * ** Date: 09/20/2017
 * ** Description: Collect and print user's favorite animal.
 * *********************************************************************/ 

#include <iostream>
#include <string>

// a simple program
int main()
{
	std::string faveAnimal;
	std::cout << "Please enter your favorite animal." << std::endl;
	std::cin >> faveAnimal;
	std::cout << "Your favorite animal is the " << faveAnimal; 
	std::cout << "." << std::endl;

	return 0;
}
