
/*
Name:					Stefani Moore
Last Date Modified:		09-19-2016
Assignment:				HW4
*/

//******************************************************
//MyVector.h File
//
//MyVector class declaration
//
//******************************************************

#ifndef MYVECTOR_
#define MYVECTOR_
/*Defines a MyVector type which mirrors the STL vector class.  It uses templates and dynamic memory allocation*/

namespace HW4
{
typedef int T;
class MyVector
{
private:
    int vsize = 0;
    MyVector* beginPtr = nullptr;
    MyVector* nextPtr = nullptr;
	MyVector* lastPtr = nullptr; //Added a last pointer object to better implement my logic -SM
    T tValue;

public:
    MyVector();
    T operator[] (int index);
    void pop_back();
    void push_back(T value);
    int size();
    bool empty();
    int search(T Value, MyVector & vec); //Added the vec1 object so that I can search through the contents added in the push_back of main - SM
    
    
};

}//namespace
#endif