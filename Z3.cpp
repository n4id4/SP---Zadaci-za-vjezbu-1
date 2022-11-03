#include <iostream>
using namespace std; 

int main()
{
	//3.	Napisati program koji omogucava unos dva broja. Izracunati koliko iznosi zbir dvije posljednje cifre (cifre na mjestu jedinica) i ispisati na konzolu.

	int a, b;
	cout << "Unesite prvi broj: ";
	cin >> a;
	cout << "Unesite drugi broj: ";
	cin >> b;

	cout << "Zbir dvije posljednje cifre iznosi: " << a % 10 + b % 10<<endl;

	system("pause>0");
	return 0;
}
