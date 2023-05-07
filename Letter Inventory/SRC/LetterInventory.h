/*
 * Manager.cpp
 *
 *  Created on: May 3, 2023
 *      Author: lucaslassila
 */
// https://www.digitalocean.com/community/tutorials/string-uppercase-lowercase-c-plus-plus
// manager class

#ifndef _LETTERINVENTORY_H_
#define _LETTERINVENTORY_H_

#include <iostream>
#include <cstring>



using namespace std;


/*class Array{ // class to be inherited
*public:
	*string constructor(){
		*static string tally[26];
		*return tally;
	*}
};*/

class LetterInventory{

	public: // the following is public until stated otherwise
	string entry; // string for input
	string localContents; // temporary string for storing value of array at int val
	string entryUC; // uppercase string

	 int tally[26];// array



		/*void constructor(){
			string tally[26]; // create an array of chars for each letter in the alphabet
			}*/

		void fillArray(string entry){

			setToZero(); // fill array with zeros
			 entryUC  = toUpper(entry); // method to convert string to upper case
			cout<< entryUC<< endl; // print to check

			for(int i = 0; i < entry.length(); i++){ // loop to convert a char from entryUC and put in array Tally
				char c = entryUC.at(i); // seperate off a char
				int val = c - 0; // convert to ascii value
				int index = val - 65; // subract 65 to be at 0 for "A"

					tally[index] += val; // add val to index

			cout<< tally[index] << endl; // print to check


			}// end for loop entry

		}// end fillArray()

		void print(){
			int counter=0; // counter for number of letters to be displayed
			for(int i = 0; i <= 25; i++){
				int temp = tally[i]; // temp value for number at i
				int a = (i+65);
					temp = temp/a; // return number of chars were i+65 = ascii value
				for(int j = 0; j<= temp-1; j++){ // minus 1 is a way so that it doesn't print one of every letter
					char ch = a; // convert acsii value into char
					counter++;
					cout << ch;
				}// end inner for


			}// end outer for
			cout<< " "; // spacer
			cout<< "size: " << counter ;
		}// end print()

		string toUpper (string entry){ // convert to upper case

			for(int i = 0; i < entry.length(); i++){ // convert letter by letter
				entry[i] = toupper(entry[i]);
			}
			return entry;
		}// end toUpper

		void setToZero(){ // fill array with zero
			for(int i = 0; i<=25; i++){
				tally[i] = 0;
			}
		}

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


