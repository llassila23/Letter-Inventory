/*
 * Date.cpp
 * The methods file
 *  Created on: May 3, 2023
 *      Author: lucaslassila
 */

#include "Date.h" // include definition of date class


 Date :: Date(int month, int day, int year){
	this -> day = day;
	this -> month = month;
	this -> year = year;
}

void Date :: display(){
	cout<< month << "/" << day << "/" << year << endl;

}


