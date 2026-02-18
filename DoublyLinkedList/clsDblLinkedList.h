#pragma once
#include <iostream>
using namespace std;


template <class T>
class clsDblLinkedList
{
private:
    int _Size = 0;

public:

    class Node
    {
    public:
        T value;
        Node* next;
        Node* prev;
    };

    Node* head = NULL;

    void InsertAtBeginning(T value)
    {

        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = head;
        newNode->prev = NULL;

        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;

        _Size++;
    }

    // Print the linked list
    void PrintList()

    {
        Node* Current = head;

        while (Current != NULL) {
            cout << Current->value << " ";
            Current = Current->next;
        }
        cout << "\n";


    }

    Node* Find(T Value)
    {
        Node* Current = head;
        while (Current != NULL) {

            if (Current->value == Value)
                return Current;

            Current = Current->next;
        }

        return NULL;

    }

    void InsertAfter(Node* current, T value) {


        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = current->next;
        newNode->prev = current;

        if (current->next != NULL) {
            current->next->prev = newNode;
        }
        current->next = newNode;

        _Size++;
    }

    void InsertAtEnd(T value) {


        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = NULL;
        if (head == NULL) {
            newNode->prev = NULL;
            head = newNode;
        }
        else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }

        _Size++;
    }

    void DeleteNode(Node*& NodeToDelete) {



        if (head == NULL || NodeToDelete == NULL) {
            return;
        }
        if (head == NodeToDelete) {
            head = NodeToDelete->next;
        }
        if (NodeToDelete->next != NULL) {
            NodeToDelete->next->prev = NodeToDelete->prev;
        }
        if (NodeToDelete->prev != NULL) {
            NodeToDelete->prev->next = NodeToDelete->next;
        }
        delete NodeToDelete;

        _Size--;
    }

    void DeleteFirstNode()
    {


        if (head == NULL) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;

        _Size--;
    }

    void DeleteLastNode() {



        if (head == NULL) {
            return;
        }

        if (head->next == NULL) {
            delete head;
            head = NULL;
            _Size--;
            return;
        }

        Node* current = head;

        while (current->next->next != NULL)
        {
            current = current->next;
        }

        Node* temp = current->next;
        current->next = NULL;
        delete temp;

        _Size--;
    }



    int Size()
    {
        return _Size;
    }



    bool IsEmpty()
    {
        return _Size == 0;
    }



    void Clear()
    {
        while (_Size > 0)
        {
            DeleteFirstNode();
        }
    }



    void Reverse()
    {
        Node* current = head;
        Node* newHead = nullptr;

        while (current != nullptr)
        {
            Node* temp = current->prev;
            current->prev = current->next;
            current->next = temp;

            newHead = current;       // دايمًا خزن آخر نود عدينا عليها
            current = current->prev; // كمل مشي
        }
        head = newHead;
    }



    Node* GetNode(int index)
    {
        int counter = 0;

        if (index > _Size - 1 || index < 0)

            return NULL;

        Node* current = head;

        while (current != NULL)
        {
            if (counter == index)

                break;

            current = current->next;

            counter++;
        }

        return current;
    }



    T Getitem(int index)
    {
        Node* ItemNode = GetNode(index);

        if (ItemNode == NULL)
            throw out_of_range("Invalid Index");
        else
            return ItemNode->value;
    }



    bool UpdateItem(int index, T newValue)
    {
        Node* itemNode = GetNode(index);

        if (itemNode != NULL)
        {
            itemNode->value = newValue;
            return true;
        }
        else
        {
            return false;
        }
    }



    bool InsertAfter(int index, T value)
    {

        Node* itemNode = GetNode(index);

        if (itemNode != NULL)
        {
            InsertAfter(itemNode, value);
            return true;
        }
        else
        {
            return false;
        }

    }



    T GetFirstItem()
    {
        
        if (head == NULL)
            throw out_of_range("List is empty");

        
            return head->value;
    }



    T GetLastItem()
    {
        if(head == NULL)
            throw out_of_range("List is empty");
        

        Node* current = head;

        while (current->next != NULL)
        {
            current = current->next;
        }

        return current->value;


    }

    bool DeleteByValue(T value)
    {

        Node* itemNode = Find(value);
 
        if (itemNode == NULL)
            return false;
            

        DeleteNode(itemNode);

        return true;

    }


};


