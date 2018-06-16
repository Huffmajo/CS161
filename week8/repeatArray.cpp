/*********************************************************************
 ** Author: Joel Huffman
 ** Date: 11/10/2017
 ** Description: Repeats the elements of a user-supplied array twice.
 *********************************************************************/

#include <iostream>
using std::cout;
using std::endl;

/*********************************************************************
 ** Description: Takes a pointer to an array of doubles by reference and
 ** the size of the array as an int. Doubles the size of the array and
 ** doubles the elements of the array. Sets the pointer to that new array.
 *********************************************************************/

void repeatArray(double*& pointerArray, int size)
{
    //Create new dynamic array that is twice the size of original
    double *pointerArray2 = new double[size * 2];
    
    //fill first half of new array with same values from user's array
    for (int i = 0; i < size; i++)
    {
        pointerArray2[i] = pointerArray[i];
    }
    
    //fill second half of new array with same vaules from user's array
    for (int i = size; i < (size * 2); i++)
    {
        pointerArray2[i] = pointerArray2[i-size];
    }
    
    //delete pointers and set to NULL
    delete [] pointerArray;
    pointerArray = pointerArray2;
    
}


int main()
{
    double* myArray = new double[3];
    for (int i = 0; i<3; i++)
        myArray[i] = (i + 1) * 2;
    
    repeatArray(myArray, 3);
    
    for (int i = 0; i<6; i++)
        cout << myArray[i] << endl;
    
    delete[]myArray;
    
    double* arr = new double[4];
    for (int i = 0; i < 4; i++)
    {
        arr[i] = i + 1;
    }
    
    repeatArray(arr, 4);

    
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    
    delete[]arr;
    
    return 0;
}

