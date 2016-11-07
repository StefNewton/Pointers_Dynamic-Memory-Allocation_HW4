/*
Name:					Stefani Moore
Last Date Modified:		09-19-2016
Assignment:				HW4
*/

//*******************************************************************
//MyVector.cpp
//
//Contains MyVector class implentations 
//
//*******************************************************************

#include <iostream>
using namespace std;

#include "MyVector.h"

namespace HW4 {
	MyVector::MyVector()
	{
		//may be empty since MyVector.h initializes values
	}

	T MyVector::operator[] (int index)
	{
		//Make a temporary vector
		/* Start at beginPtr and from nextPtr to nextPtr, index times*/
		//return the value at the correct object

		MyVector *tempPtr; //Temporary vector

		int i = 0; //for indexing

		//Loop begins at beginPtr; while tempPtr != to null; Indexs through nextPtr
		for (tempPtr = beginPtr; tempPtr != nullptr; tempPtr = tempPtr->nextPtr)
		{
			if (i == index)
			{
				return tempPtr->tValue; //value returned at the correct object
			}
			i++; //index while tempPtr != to NULL
		}
		return -1;
		delete tempPtr; //delete ptr so that there is no memory leak
	}

	void MyVector::pop_back()
	{
		//First check if it is empty
		if (empty())
			return;
		else
		{
			//Start at beginPtr
			MyVector *vecPtr = beginPtr;

			//Allocate a new pointer object
			MyVector *vecPrevPtr = new MyVector;

			//Allocate a new pointer object
			MyVector *vecPrevPrevPtr = new MyVector;

			//If pointing to null, there is nothing to remove
			if (vecPtr == nullptr)
				return;
			else
				while (vecPtr != nullptr)
				{
					/*Think about a linked chain.  We are going to keep track of the last node that points to nullptr, the second last node, and the third last node*/


	/*The only way we know that we have hit the end of the link is to look for a node that points to nullptr, not another node. As we advance from the nextPtr to the
	one that is pointing to, we need to keep track of the two previous pointers, so we have a way of getting to the previous node.  Once we delete the last node, we now
	need to point the previous node to null pointer, which means we need to know where its previous pointer points to.  Keep in mind these are not two-way links, so as we
	are going forward in the chain we have to keep track of the previous links to go back.*/

					vecPrevPrevPtr->nextPtr = vecPrevPtr;
					vecPrevPtr->nextPtr = vecPtr;
					vecPtr = vecPtr->nextPtr;
				}
			/*if you don't delete the pointer, the memory will not be released but you won't be able to get to it...this causes a memory leak*/
			delete vecPtr;
			//the last one now points to the previous
			nextPtr = vecPrevPtr;
			//we have to reduce the size since we deleted the last link
			vsize--;


		}
		return;
	}

	void MyVector::push_back(T value)
	{
		//check if it is empty
		//if so create a new node (using dynamic memory), fill that new node with the value and increase the size
		//otherwise traverse the node until the end, keeping track of the previous and current pointer.
		//When you get to the end point to this newly created node, fill the new node with the value, increase the size and point the last pointer to this new node.

		MyVector *newPtr = new MyVector; //Newly allocated pointer object
		newPtr->tValue = value;	//Sets tValue = value
		newPtr->nextPtr = nullptr; //The next pointer in the list = nullptr

		if (empty()) //if MyVector is empty
		{
			beginPtr = lastPtr = newPtr; //MyVector was empty so the first=last= the newly allocated pointer 
			newPtr->nextPtr = nullptr; //The nextPtr is null
			vsize++; //Increase vec size by 1
		}
		else //MyVector is not empty
		{
			lastPtr->nextPtr = newPtr; //last now = next ptr which equals the value of newPtr
			newPtr->nextPtr = nullptr; // nextPtr = null
			lastPtr = lastPtr->nextPtr; // the previous next is now equal to the last ptr
			vsize++; // vec size increases by 1
		}

	}

	int MyVector::size()
	{
		return vsize; //returns vector size(int)
	}

	bool MyVector::empty()
	{
		//Checks to see if empty (meaning beginPtr is pointing to nullptr)
		return (beginPtr == nullptr);

	}

	/*Returns -1 if not found, otherwise returns the index of the value*/
	int MyVector::search(T value, MyVector & vec) //added MyVector object to pass values that were added using the push_back function in main
	{

		for (int j = 0; j < vec.size(); j++) //loop through 0 to the vector size
		{
			int temp = vec[j]; //temp stores value at vec[j]

			if (temp == value) //compares value to temp
			{
				return j; //returns index of the value if found where index range is from 0-9 for the 10 values
			}
		}
			return -1; //If value not found, returns -1
		}
	}//namespace