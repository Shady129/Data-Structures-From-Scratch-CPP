#include <iostream>
#include "clsMyQueue.h";
using namespace std;


int main()
{
	clsMyQueue<int> myList;


	cout << "=== Queue Test ===\n\n";

	// Push elements
	myList.Push(10);
	myList.Push(20);
	myList.Push(30);
	myList.Push(40);


	cout << "After Push: ";
	myList.Print();

	cout << endl;


	cout << "Front: " << myList.Front() << endl;
	cout << "Back: " << myList.Back() << endl;
	cout << "Size: " << myList.Size() << endl;
	cout << "Is Empty: " << myList.IsEmpty() << endl;

	cout << endl;

	cout << "After Reverse: ";

	myList.Reverse();
	myList.Print();


	cout << "\n--------------------\n";

	cout << "Update index 0 to 90\n";
	myList.Update(0, 90);
	myList.Print();

	cout << "\n--------------------\n";

	cout << "Item at index 1: " << myList.GetItem(1) << endl;

	cout << "\n--------------------\n";

	myList.Clear();

	cout << "After Clear: ";
	myList.Print();
	
	cout << "\nSize: " << myList.Size() << endl;

	cout << "\n--------------------\n";

	cout << "\nIs Empty: " << myList.IsEmpty() << endl;


	return 0;
}

