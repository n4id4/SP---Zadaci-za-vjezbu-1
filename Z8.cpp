#include <iostream>
using namespace std; 

int main()
{
	//8.	Putovanje od destinacije A do destinacije B traje n sekundi (omoguciti unos vrijednosit n preko konzole). Izracunati i ispisati koliko je to sati, minuta i sekundi.

	int n;
	cout << "Unesite broj sekundi: ";
	cin >> n;

	int brojSati = n / 3600; //zato sto jedan sat ima 3600 sekundi
	n -= (brojSati * 3600);
	int brojMinuta = n / 60; // zato sto minuta ima 60 sekundi
	n -= (brojMinuta * 60);

	cout << "Putovanje traje: " << brojSati << "h " << brojMinuta << "min " << n << "s";

	system("pause>0");
	return 0;
}
