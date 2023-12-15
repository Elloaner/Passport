#pragma once
#include <iostream>
#include <string>

using namespace std;

class Passport
{
protected:
	string FullName;
	string BirthDate;
	string Nationality;
	string PassportCode;
public:
	Passport(string fullname, string birthdate, string nationality, string passportcode) 
		: FullName(fullname), BirthDate(birthdate), Nationality(nationality), PassportCode(passportcode)
	{}

	void ShowPassportInfo()
	{
		cout << "\tPassport Information\n"
			<< "Full Name : " << FullName
			<< "\nDate of birth : " << BirthDate
			<< "\nNationality : " << Nationality
			<< "Passport code : " << PassportCode << endl;
	}

};

class ForeignPassport : public Passport
{
private:
	string VISA;
public:
	ForeignPassport(string fullname, string birthdate, string nationality, string passportcode, string visa)
		: Passport(fullname, birthdate, nationality, passportcode), VISA(visa)
	{}

	void ShowForeignPassportInfo()
	{
		cout << "VISA\n";
		Passport::ShowPassportInfo();
	}
};
