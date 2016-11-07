/*
Name:					Stefani Moore
Last Date Modified:		09-19-2016
Course:					CSCI 2412 - Data Structures
Assignment:				HW4
Description:			For this program we will define our own MyVector class using dynamic memory allocation and pointers 
						to chain each object together.

Status:					Compiles and runs successfully via Microsoft Visual Studios Community 2015

			**NOTE: The index range for the search function will be displayed as a range from 0 to 9 for the 10 integers stored in vec1**

						**Meets all requirements as understood by student**

*/


/*Dr. Augustine
Last Updated: 09/09/2016
This program is a driver demonstrating the member functions of MyVector.h*/

#include <iostream>
#include "MyVector.h"
using namespace std;

int main()
{
    HW4::MyVector vec1;
    cout << "Searching an empty MyVector returns index: " << vec1.search(1, vec1) << endl<<endl;
    
    for (int i = 1; i<=10; i++)
        vec1.push_back(i);
    
    cout << "After 10 pushbacks vector contains: ";
    
    for (int i = 0; i<vec1.size(); i++)
        cout << vec1[i] << " ";
    cout << endl<<endl;
    
    cout << "Searching for 5 returns index: "<< vec1.search(5, vec1) << endl;
    
    cout << "Searching for 10 returns index: "<< vec1.search(10, vec1) << endl;

    
    cout << "Searching for 11 returns index: " << vec1.search(11, vec1) << endl;
    
    vec1.pop_back();

	cout << "After one pop_back, the vector contains: "; //moved this statement to after the inital pop_back - SM

	//cout << vec1.size() << endl; <----- Commented out because it wasn't necessary here - SM
	for (int i = 0; i<vec1.size(); i++) //Moved vector displays statement to be after the initial pop_back to display pop_back result -SM
		cout << vec1[i] << " ";
	cout << endl << endl;
    
    cout << "After pop_back searching for 10 returns index: " << vec1.search(10, vec1) << endl;
    
    cout << "Current Size of the vector is: ";
    int tempSize = vec1.size();
	cout << tempSize << endl; //This statement was missing to display the current size of vec1 -SM

    for (int i = 0; i < tempSize; i++)
    {
        vec1.pop_back();
        cout << "After pop_back: ";
        for (int j = 0; j < vec1.size(); j++)
            cout << vec1[j] << " ";
        cout << endl;
    }
    
    return 0;
}
