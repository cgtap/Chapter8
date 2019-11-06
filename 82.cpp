 
#include <iostream> 
 
using namespace std; 

const int ARRAY_SIZE = 15;

void printArray(const int x[], int sizeX);

int smallestIndex(const int x[], int sizeX);

int main()
{
	int list[ARRAY_SIZE] = {56, 34, 67, 54, 23, 87, 66, 92, 15, 32,
						    55, 54, 88, 22, 30};							

	cout << "List elements: ";					
	printArray(list, ARRAY_SIZE);					
	cout << endl;										

	cout << "The position of the first occurrence of the smallest "
        << "element in list is: "
		 << smallestIndex(list, ARRAY_SIZE) << endl;											
	cout << "The smallest element in list is: "
		 << list[smallestIndex(list, ARRAY_SIZE)]
		 << endl << endl;									

	return 0;
}

//Function to print the array
void printArray(const int list[], int listSize)
{
    int index;

    for (index = 0; index < listSize; index++)
        cout << list[index] << " ";
}
	
	// Function to find and return the index of the 
	// smallest element of an array 
int smallestIndex(const int list[], int listSize)
{
	int counter;
  	int minIndex = 0; //Assume first element is the smallest

	for (counter = 1; counter < listSize; counter++)
	   if (list[minIndex] > list[counter])
			minIndex = counter;
	return minIndex;
}