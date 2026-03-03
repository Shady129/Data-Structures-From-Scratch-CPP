#pragma once
#include<iostream>
using namespace std;

template <class T> 

class clsDynamicArray
{

protected:
	int _Size = 0;
	
private:
	T* OriginalArray;

	clsDynamicArray(int Size = 0)
	{

		if (Size < 0)
			Size = 0;

		_Size = Size;

		OriginalArray = new T[_Size];
	}

	~clsDynamicArray()
	{
		delete[] OriginalArray;
	}



	bool SetItem(int index, T Value)
	{

		if (index < 0 || index >= _Size) 
			return false;


		OriginalArray[index] = Value;
		return true;
	}



	int Size()
	{
		return _Size;
	}



	bool IsEmpty()
	{
		return(_Size == 0 ? true : false);
	}



	void Resize(int NewSize)
	{
		if (NewSize < 0)
		{
			NewSize = 0;
		}

		T* NewArray = new T[NewSize];

		int MinSize = (_Size < NewSize) ? _Size : NewSize;

		for (int i = 0; i < MinSize; i++)
		{
			NewArray[i] = OriginalArray[i];
		}


		delete[] OriginalArray;

		OriginalArray = NewArray;

		_Size = NewSize;
	}



	T GetItem(int index)
	{
		if(index < 0 || index >= _Size)

			throw out_of_range("Index out of range");

		return OriginalArray[index];
	}
	


	void Reverse()
	{
		T* NewArray = new T[_Size];

		for (int i = 0; i < _Size ; i ++)
		{
			NewArray[i] = OriginalArray[_Size - 1 - i];
		}
		delete[] OriginalArray;

		OriginalArray = NewArray;
	}



	void Clear()
	{
		delete[] OriginalArray;

		OriginalArray = nullptr;

		_Size = 0;
	}




	bool DeleteAtItem(int index)
	{
		if (index < 0 || index >= _Size)
			return false;

		T* NewArray = new T[_Size - 1];

		int j = 0;

		for (int i = 0; i < _Size; i++)
		{
			if (i == index)
				continue;

			NewArray[j] = OriginalArray[i];
			j++;
		}
		delete[] OriginalArray;

		OriginalArray = NewArray;

		_Size--;

		return true;
	}



	bool InsertAt(int index, T value)
	{
		if (index > _Size || index < 0)
			return false;

		T* NewArray = new T[_Size + 1];

	
		for (int i = 0; i < index; i++)
			NewArray[i] = OriginalArray[i];

		
		NewArray[index] = value;

	
		for (int i = index; i < _Size; i++)
			NewArray[i + 1] = OriginalArray[i];

		delete[] OriginalArray;
		OriginalArray = NewArray;

		_Size++;

		return true;
	}






	void InsertAtBeginning(T value)
	{
		InsertAt(0, value);
	}



	bool InsertBefore(int index, T value)
	{
		if (index < 0)
			return InsertAt(0, value);
		else
			return InsertAt(index , value);
	}



	bool InsertAfter(int index, T value)
	{
		if (index < 0 || index >= _Size)
			return false;
		
		return InsertAt(index + 1, value);
	}

	

	bool InsertAtEnd(T value)
	{
		return InsertAt(_Size, value);
	}




	void PrintList()
	{
		for (int i = 0; i < _Size; i++)
		{
			cout << OriginalArray[i] << " ";
		}
		cout << endl;
	}


};





















