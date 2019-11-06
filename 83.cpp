 
#include <iostream> 
  
using namespace std;

const int ARRAY_SIZE = 15;

void printArray(const int x[], int sizeX);

int lastLargestIndex(const int x[], int sizeX);

int main()
{
	int list[ARRAY_SIZE] = {56, 34, 67, 54, 23, 87, 66, 92, 15, 32,
						    55, 54, 88, 92, 30};							

	cout << "List elements: ";					
	printArray(list, ARRAY_SIZE);					
	cout << endl;										

	cout << "The position of the last occurrence of the largest "
        << "element in list is: "
		 << lastLargestIndex(list, ARRAY_SIZE) << endl;											
	cout << "The largest element in list is: "
		 << list[lastLargestIndex(list, ARRAY_SIZE)]
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
int lastLargestIndex(const int list[], int listSize)
{
	int counter;
  	int maxIndex = listSize - 1; //Assume first element is the smallest

	for (counter = listSize - 1; counter >= 0; counter--)
	   if (list[maxIndex] < list[counter])
			maxIndex = counter;
	return maxIndex;
}