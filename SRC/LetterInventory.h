/*
 * Manager.cpp
 *
 *  Created on: May 3, 2023
 *      Author: lucaslassila
 */
// https://www.digitalocean.com/community/tutorials/string-uppercase-lowercase-c-plus-plus
// manager class

#ifndef LETTERINVENTORY_H_
#define LETTERINVENTORY_H_

#include <iostream>
#include <cstring>

using namespace std;


class Array{ // class to be inherited
public:
	void constructor(){
	string tally[26];
	}
};

class LetterInventory : public Array { // letter inventory inhereits array

	public: // the following is public until stated otherwise
	string entry; // string for input
	string localContents; // temporary string for storing value of array at int val

		/*void constructor(){
			string tally[26]; // create an array of chars for each letter in the alphabet
			}*/

		void fillArray(string entry){
			string entryUC  = toUpper(entry); // method to convert string to upper case
			cout<< entryUC<< endl; // print to check

			for(int i = 0; i < entry.length(); i++){ // loop to convert a char from entryUC and put in array Tally
				char c = entryUC.at(i); // seperate off a char
				int val = c - 0; // convert to ascii value
					val -= 65; // subract 65 to be at 0 for "a"

					localContents = tally[val];

			cout<< localContents << endl; // print to check

					localContents + (c +""); // convert c to a string, add to existing contents of array at val

					tally[val] = localContents;

			}// end for loop entry

		for(int i : tally ){ // for each loop to print array to console (check)
				cout<< tally[i];
			}// end for each

		}// end fillArray()

		string toUpper (string entry){ // convert to upper case

			for(int i = 0; i < entry.length(); i++){ // convert letter by letter
				entry[i] = toupper(entry[i]);
			}
			return entry;
		}// end toUpper


}; // end main

// prompt for text
// string text = input.next line
// for(i<=text.length){
	// char letter = text.charAt(i)
// if (special character)
	// skip
// if (num){
	// skip

// create array, one element per letter


// Ascii table, if numeric value between 65 and 90, it is a capital letter
	// asciitable.com

	//char cast to int

/*for(int i <=text length){
	char = text.charAt(i)
		char.toUpper
		int val = char.toInt()
		while(65<=val<=90){
			array.add@(val-65)
		}
}*/

#endif /* LETTERINVENTORY_H_ */


