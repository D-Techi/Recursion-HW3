#pragma once

/*
Name:					Stefani Moore
Last Date Modified:		09-12-2016
Assignment:				HW3
*/

//******************************************************
//Recursion.h File
//
//Recursion class declaration
//
//******************************************************

#ifndef RECURSION_H
#define RECURSION_H


#include <iostream>	//input-output stream
#include <vector>	//vector
#include <fstream>	//file stream
#include <string>	//string
#include <algorithm> //sort

//to minimize the typing of std::
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;


class Recursion
{

public:
	Recursion(); //constructor
	int binarySearch(const vector<string> vect, int first, int last, string target); //recursive binary search
	void addToVect(string input); //add file contents to vector
	void displayVector(); //sorts then displays vector
	int getFirst(); //returns 0 for first element in a vector
	int getLast(); //returns myVect.size() for the last element in the vector
	vector<string> getVectCopy(); //returns copy of myVect contents
	

private:
	std::vector<std::string> myVect;	//vector of strings

};

//global function declarations

bool readFromFile(ifstream &inputFile, Recursion& file); // reads from the file and stores the strings into myVect

bool isEmpty(ifstream & inputFile); //checks to see if the file is empty

string userInput(); //Used to get the string target for the binary search

#endif
