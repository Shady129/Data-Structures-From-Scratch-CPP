#include <iostream>
#include "clsDynamicArray.h"

using namespace std;
int main()
{
		

	// Create dynamic array with size 5
	clsDynamicArray<int> MyDynamicArray(5);

	

	cout << "Filling the array:\n";

	for (int i = 0; i < MyDynamicArray.Size(); i++)
	{
		MyDynamicArray.SetItem(i, (i + 1) * 10);
	}



	MyDynamicArray.PrintList();



	cout << "\nInsert element at end:\n";
	MyDynamicArray.InsertAtEnd(60);



	MyDynamicArray.PrintList();



	cout << "\nDelete element at index 2:\n";
	MyDynamicArray.DeleteAtItem(2);



	cout << "\nReverse array:\n";
	MyDynamicArray.Reverse();
	MyDynamicArray.PrintList();



	cout << "\nResize to 3:\n";
	MyDynamicArray.Resize(3);
	MyDynamicArray.PrintList();



	cout << "Is array empty? ";
	cout << (MyDynamicArray.IsEmpty() ? "Yes" : "No") << endl;



	return 0;
}


