/*
 * Main.cpp
 *
 *  Created on: May 3, 2023
 *      Author: lucaslassila
 */

// directions found here https://www.youtube.com/watch?v=ie282UTAGxg


// example of OOP in c++

#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

/* This is now in Date.h header file
 * class Date{
private:
	int day, month, year;
public:
	Date(int month = 1, int day = 1, int year = 2023);
	void display();

};*/

/* This is now in Date.cpp methods file
Date :: Date(int month, int day, int year){
	this -> day = day;
	this -> month = month;
	this -> year = year;
}

void Date :: display(){
	cout<< month << "/" << day << "/" << year << endl;

}
*/

int main(){
	Date fourth(6, 4, 2023);
	fourth.display();
}
