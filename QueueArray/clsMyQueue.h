#pragma once
#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

template <class T>


class clsMyQueue
{


protected:

	clsDblLinkedList<T> _MyList;

public:


	void Push(T item)
	{
		_MyList.InsertAtEnd(item);
	}



	void Pop()
	{
		_MyList.DeleteFirstNode();
	}



	void Print()
	{
		_MyList.PrintList();
	}



	int Size()
	{
		return _MyList.Size();
	}



	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}



	T Front()
	{
		return _MyList.Getitem(0);
	}



	T Back()
	{
		return _MyList.Getitem(Size() - 1);
	}



	void Reverse()
	{
		_MyList.Reverse();
	}



	T GetItem(int index)
	{

		return _MyList.Getitem(index);
	}



	bool Update(int index, T item)
	{
		
		return _MyList.UpdateItem(index, item);
		
	}



	void InsertAfter(int index, T NewValue)
	{

		_MyList.InsertAfter(index, NewValue);
	}



	void InsertAtFront(T Value)
	{ 
	
		_MyList.InsertAtBeginning(Value);
	}



	void Clear()
	{
		_MyList.Clear();
	}


};



