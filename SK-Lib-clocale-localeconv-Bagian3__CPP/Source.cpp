#include <iostream>
#include <clocale>
#include <conio.h>

/*	Source by Programiz
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS 2019 
*/

using namespace std;

int main() {
	lconv* l;

	setlocale(LC_MONETARY, "en_GB.utf8");
	l = localeconv();

	cout << "Locale Currency Symbol = " << l->currency_symbol << endl;
	cout << "International Currency Symbol = " << l->int_curr_symbol << endl;

	setlocale(LC_MONETARY, "en_US.utf8");
	l = localeconv();
	
	cout << "Locale Currency Symbol = " << l->currency_symbol << endl;
	cout << "International Currency Symbol = " << l->int_curr_symbol << endl;

	_getch();
	return 0;
}