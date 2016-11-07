/*
Name:					Stefani Moore
Last Date Modified:		09-12-2016
Course:					CSCI 2412 - Data Structures
Assignment:				HW3
Description:			This program has a Recursion class with one recursive function.
						Function 1: Implement the recursive binarySearch algorithm for a vector of strings  
						reading in each string from a file (binSearchin.txt) that has each string on a separate 
						line. 
Status:					Compiles and runs successfully via Microsoft Visual Studios Community 2015 and the
						csegrid.

						**Meets all requirements as understood by student.**
*/




//******************************************************
//main.cpp File
//
//This will be the main function file 
//
//******************************************************

#include "Recursion.h" //header file

int main()
{
	Recursion recursive; //Recursion class object declartion
	string userWord; //user defined target word
	int temp; //for binary search return index
	char choice; //to continue or break loop for binary search
	bool file; //true if file opens and has contents, false if file is empty or fails to open

	ifstream inputFile;
	inputFile.open("binSearchin.txt"); //open file

	 
	file = readFromFile(inputFile, recursive);

	if (file == true) //read and store contents of the file into the Recursion class
	{
		recursive.displayVector();	//sorts and displays the content 

		do //For recursive binary search implementation 
		{
			userWord = userInput();

			temp = recursive.binarySearch(recursive.getVectCopy(), recursive.getFirst(), recursive.getLast(), userWord);

			if (temp == -1) //base case result where word is not in the list
			{
				cout << "Not found\n";
			}
			else if (temp >= 0) //word found
			{
				cout << "Found at position " << temp + 1 << endl;
			}

			cout << "Would you like to search for another word? y/n\n";
			cin >> choice;
			cin.ignore();
		} while (choice == 'Y' || choice == 'y');
	}
	else
		cout << "Error opening file or the file was empty. Fix your file and try again\n\n";

	return 0;
}