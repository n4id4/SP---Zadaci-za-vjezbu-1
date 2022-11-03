#include <iostream>
using namespace std; 

int main()
{
	//1.	Napisati program za izracunavanje dijagonale pravougaonika. Omoguciti unos duzine stranica putem konzole.
	// d=sqrt(a^2+b^2)

	int a, b;
	cout << "Unesite duzinu prve stranice: ";
	cin >> a;
	cout << "Unesite duzinu druge stranice: ";
	cin >> b;

	int d = sqrt(pow(a, 2) + pow(b, 2));
	cout << "Duzina dijagonale pravouganika iznosi: " << d;


	system("pause>0");
	return 0;
}
