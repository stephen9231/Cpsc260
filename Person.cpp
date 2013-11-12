// File:     Person.cpp
//
// Author:   Yoonji Byun Stephen Tai
// SID:      18703116 35015114
// UserID:   x9a8
// Lab:      L1A
// Modified: 2013 October 22nd
//

#include "Person.h"

using namespace std;

int Person::nextUserID=0;

Person::Person()
{
	this->personID = nextUserID;
	nextUserID ++;
}

Person::Person(string first,string last)
{
	this->personID = nextUserID;
	nextUserID++;
	this->name_.firstname=first;
	this->name_.lastname=last;
}

void Person::addFriend(int person_ID)
{
	this->friendList.push_back(person_ID);
}

vector<int> Person::getFriend()
{
	return this->friendList;
}



int Person::getpersonID()
{
	return this->personID;
}

string Person::getName()
{
	return this->name_.firstname+" "+this->name_.lastname;
}

