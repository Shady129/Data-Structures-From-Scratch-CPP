#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;



int main()
{

	clsDblLinkedList<int> myList;



	myList.InsertAtBeginning(10);
	myList.InsertAtBeginning(20);
	myList.InsertAtBeginning(30);
	myList.InsertAtBeginning(40);
	myList.InsertAtBeginning(50);

	cout << "List: ";
	myList.PrintList();



	cout << "First Item: " << myList.GetFirstItem() << endl;


	cout << "Last Item: " << myList.GetLastItem() << endl;




	
	cout << "Size: " << myList.Size() << endl;
	


	cout << "\nBefore Update:\n";
	myList.PrintList();


	
	if (myList.UpdateItem(0, 999))
	{
		cout << "\nUpdate Success.\n";
	}
	else
	{
		cout << "\nUpdate Failed.\n";
	}

	cout << "\nAfter Update:\n";
	myList.PrintList();




	myList.DeleteByValue(20);
	myList.PrintList();
	cout << "\nSize: " << myList.Size() << endl;




	cout << "\nAfter Delete First:\n";
	myList.DeleteFirstNode();
	myList.PrintList();
	cout << "Size: " << myList.Size() << endl;




	cout << "\nAfter Delete Last:\n";
	myList.DeleteLastNode();
	myList.PrintList();
	cout << "Size: " << myList.Size() << endl;





	cout << "\nAfter Delete Last Again:\n";
	myList.DeleteLastNode();
	myList.PrintList();
	cout << "Size: " << myList.Size() << endl;



	return 0;

}
