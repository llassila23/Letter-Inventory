/*
 * Date.h
 * Header file with declaration of the date class
 *  Created on: May 3, 2023
 *      Author: lucaslassila
 */

#ifndef DATE_H_
#define DATE_H_

#include <iostream>  // define IO so it is defined where Date.h is
using namespace std;


class Date{
private:
	int day, month, year;
public:
	Date(int month = 1, int day = 1, int year = 2023);
	void display();

};


#endif /* DATE_H_ */

