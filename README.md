# Recursion-HW3
*******************************************************
*  Name      :  Stefani Moore        
*  Student ID:  106789878  
*  Class     :  CSC 2421           
*  HW#       :  3                
*  Due Date  :  Sept. 12, 2016
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

This program has a Recursion class with one recursive function.
Function 1: Implement the recursive binarySearch algorithm for 
a vector of strings reading in each string from a file 
(binSearchin.txt) that has each string on a separate line. 

*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that calls sub-functions
   to read words from a .txt file, sort the words, and perform
   a binary search on the vector of strings.

Name:  Recursion.h
   Contains the definition for the Recursion class.  

Name: Recursion.cpp
   Defines and implements the Recursion class.  


   
   
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
       % unzip [MooreHW2]

   Now you should see a directory named homework with the files:
        main.cpp
        Recursion.h
        Recursion.cpp
        makefile
        Readme.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [MooreHW3] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[Recursion]

4. Delete the obj files, executables, and core dump by
   %./make clean
