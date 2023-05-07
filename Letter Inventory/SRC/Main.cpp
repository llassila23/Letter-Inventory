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
	 LetterInventory inventory1; // create an instance of Letter Inventory

	 //inventory1.constructor();

	 string entry;// variable for the line to be analyzed

	 cout<< "enter a string"<< endl; // print

	 cin>> entry; // set entry = to input value

	 inventory1.fillArray(entry); // method to convert to ASCII values
	 inventory1.print();

	//LetterInventory inventory2 = new LetterInventory("string two");

	//LetterInventory sum = inventory1.add(inventory2);
	};
