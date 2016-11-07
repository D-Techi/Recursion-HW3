/*
Name:					Stefani Moore
Last Date Modified:		09-12-2016
Assignment:				HW3
*/

//*******************************************************************
//Recursion.cpp
//
//Contains Recursion class implentations 
//
//*******************************************************************


#include "Recursion.h"

//constructor
Recursion::Recursion()
{}

//Adds file contents to vector
void Recursion::addToVect(string input)
{
	myVect.push_back(input);
}

//Sorts and displays the contents of myVect
void Recursion::displayVector()
{
	cout << "\nSorted File Contents: \n";
	std::sort(myVect.begin(), myVect.end()); //sorts all contents stored in myVect
	for (int i = 0; i < myVect.size(); i++)
	{
		cout << i+1 << ". " << myVect[i] << endl; //displays sorted vector contents
	}
}

int Recursion::getFirst()
{
	return 0; //for the first element in the vector
}

int Recursion::getLast()
{
	return myVect.size(); //for the last element in the vector
}

vector<string> Recursion::getVectCopy()
{
	return myVect; //returns a copy of myVect
}

//Performs a recursive binary search on the conents of binSearchin.txt
int Recursion::binarySearch(const vector<string> vect, int first, int last, string target)
{
	int index = 0;
	if (first > last) //base case
	{
		index = -1;
	}
	else
	{
		int mid = first + (last - first) / 2;
		if(target == vect[mid]) //target word is in the middle
		{
			index = mid;
		}
		else if (target < vect[mid]) //target word is in the first half
		{
			index = binarySearch(vect, first, mid - 1, target);
		}
		else if (target > vect[mid]) //target word is in the second half
			index = binarySearch(vect, mid + 1, last, target);
		else //if the word does not meet any of the above the word is not in the list -- second base case
			index = -1;
	}

	return index; //returns position where the word is found
}


//*******************************************************************
//
//GLOBAL FUNCTIONS
//
//*******************************************************************

//Reads contents from the file by line and stores them into the Recursion class vector myVect
bool readFromFile(ifstream &inputFile, Recursion& file)
{
	string line;

	if (isEmpty(inputFile)) //File is empty
	{
		cout << "File is empty\n";
		return false;
	}
	else //File is not empty 
	{
		if (!inputFile.fail())	//add contents of file if file opens correctly
		{
			while (getline(inputFile, line))	//loop until all of the file contents are read
			{
				file.addToVect(line);	//add to vector in Recursion class
			}
			return true;
		}
		else
		{
			cout << "Error occured while trying to open the file.\n";
			return false;
		}
	}
}

//To obtain the target word for the binary search
string userInput()
{
	string input;
	cout << "Please input a word to search for: ";
	getline(std::cin, input);

	return input; //returns string used for target word in the binary search
}

//Checks to see file is empty. If so the binary search implementation is bypassed in main
bool isEmpty(ifstream & inputFile)
{
	return inputFile.peek() == ifstream::traits_type::eof();
}
