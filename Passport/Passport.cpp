#include "Passport.h"

using namespace std;

int main()
{
	Passport citizen("Emil Mammadov Vaqif", "01-04-2005", "Azerbaijani", "567814298");
	ForeignPassport foreigner("Ryan Golsing", "12-01-1980", "American", "325798142", "Tourist VISA");

	citizen.ShowPassportInfo();
	foreigner.ShowPassportInfo();
}