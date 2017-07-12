/*
 * date.h
 *
 *  Created on: 19.04.2017 ã.
 *      Author: user
 */

#ifndef DATE_H_
#define DATE_H_

class date {
private :     ///
	int day;     ////      Purvo tova
	int month;    /// /
	int year;     ////
public:
	date();             ///////////
	date(int,int ,int); //////////
	void print()const; //////////
	virtual ~date();   ///////////
                        /////////                  Posle tova i sled kato go napishem izkarvame setove i getove ,sled koeto otivame v cpp faila .
	int getDay() const;  ////////
	void setDay(int day); /////////
	int getMonth() const; //////////
	void setMonth(int month); ///////
	int getYear() const;   ////////
	void setYear(int year); ///////////
};

#endif /* DATE_H_ */
