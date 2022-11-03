#include <iostream>
using namespace std; 

int main()
{
	//12.	Od tri ucitana broja (a, b, c) sa tastature naci najmanji i ispisati ga.

	int a, b, c;
	cout << "Unesite a: ";
	cin >> a;
	cout << "Unesite b: ";
	cin >> b;
	cout << "Unesite c: ";
	cin >> c;

	if (a < b && a < c)
		cout << a;
	else if (b < a && b < c)
		cout << b;
	else
		cout << c;

	system("pause>0");
	return 0;
}
