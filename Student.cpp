#include "student.h"
#include <string>

using namespace std;


Student::Student() {

	FName = "no";
	LName = "name";
	CreditHEarned = 0;
	CreditHAttempted = 0;
	CreditHPoints = 0;
	//simply creates a student object
}

Student::Student(string FName,string LName) {
	this->FName = FName;
	this->LName = LName;
	CreditHEarned = 0;
	CreditHAttempted = 0;
	CreditHPoints = 0;
	//simply creates a student object
}

string Student::getLName() const{
	return LName;
}

string Student::getFName() const{
	return FName;
}

string Student::getName() const{
	return getLName() + ", " + getFName();
}