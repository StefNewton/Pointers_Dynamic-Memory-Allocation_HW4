# Pointers_Dynamic-Memory-Allocation_HW4
*******************************************************
*  Name      :  Stefani Moore        
*  Student ID:  106789878  
*  Class     :  CSCI 2421           
*  HW#       :  4                
*  Due Date  :  Sept. 19, 2016
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

This program uses the MyVector class along with pointers
and dynamic memory allocation to chain objects together.
Along with the program files an analysis.txt file is
included that provides a partial asymptotic analysis.

*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that calls sub-functions
   to read two lines of integers from a file and perform a union/difference
   on the data.

Name:  MyVector.h
   Contains the definition for the MyVector class.  

Name:  MyVector.cpp
   Contains the class implementations for MyVector.h.

   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.  
   
   The program was developed and tested on Microsoft Visual
   Studios Community 2015.  It was compiled, run, and tested 
   on the csegrid.ucdenver.pvt.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [MooreHW4]

   Now you should see a directory named homework with the files:
        main.cpp
        MyVector.h
        MyVector.cpp
        makefile
        Readme.txt
	analysis.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [MooreHW4] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[MyVector]

4. Delete the obj files, executables, and core dump by
   %./make clean
