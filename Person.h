// File:     Person.h
//
// Author:   Yoonji Byun Stephen Tai
// SID:      18703116 35015114
// UserID:   x9a8
// Lab:      L1A
// Modified: 2013 October 22nd
//


#include <vector>
#include <string>
#include <iostream>

#ifndef _PERSON_HPP
#define _PERSON_HPP

using namespace std;

class Person{

public:

	/* Struct contains two string variables, cityName and countryName
	 * Default value
	 * cityName = "city", countryName = "country"
	 */
	struct Address{
		string cityName;
		string countryName;
		Address(string city="city", string country="country")
		{
			cityName =city;
			countryName= country;
		}
	};

	struct Name{
		string firstname;
		string lastname;

		Name(string first ="first", string last="last")
		{
			firstname = first;
			lastname = last;
		}

	};

	Person();

	Person(string first, string last);

	//~Person();
	void addFriend (int person_ID);
	vector<int> getFriend();
	
	int getpersonID();
	string getName();


	string toString();


private:
	static int nextUserID;
	int personID;
	vector<int> friendList;
	Name name_;
	Address address_;

};

#endif