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

class LetterInventory {

	public: // the following is public until stated othewise
	string entry; // string for input
		void constructor(){
			//char tally[26]; // create an array of chars for each letter in the alphabet
			}
		void convertToNums(string entry){
			string entryUC  = toUpper(entry);
			cout<< entryUC<< endl;
		}

		string toUpper (string entry){ // convert to uppercase

			for(int i = 0; i < entry.length(); i++){ // convert letter by letter
				entry[i] = toupper(entry[i]);
			}
			return entry;
		}// end toUpper


};

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


