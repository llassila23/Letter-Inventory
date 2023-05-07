/* Assignment: Letter Inventory, Lab 3
 * Main.cpp
 *
 *  Created on: May 3, 2023
 *      Author: lucaslassila
 */

// The purpose of this program is to take an input value of x length and any characters
// then the string is read and a tally is made for the number of instances of each letter
// then the tally is printed along with a size of the string input

//#include <iostream>
//#include <cstring>
#include "LetterInventory.h"

using namespace std;

	int main(){
	// first string
	 LetterInventory inventory1; // create an instance of Letter Inventory

	 string entry;// variable for the line to be analyzed
	 cout<< "enter a string"<< endl; // print
	 cin>> entry; // set entry = to input

	 inventory1.fillArray(entry); // method to convert to ASCII values put in array
	 inventory1.print(); // print to console

	 cout<<""<<endl;//spacer

	// second string
	 LetterInventory inventory2; // second string

	 string entryTwo;
	 cout<< "enter a second string"<< endl;
	 cin>> entryTwo;

	 inventory2.fillArray(entryTwo);
	 inventory2.print();

	 cout<<""<<endl;//spacer

	// add the two strings
	 LetterInventory add;

	 string addStr = entry + entryTwo; // combine the two previous entries

	 add.fillArray(addStr);
	 add.print();


	};
