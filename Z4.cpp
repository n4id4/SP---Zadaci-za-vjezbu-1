#include <iostream>
using namespace std; 

int main()
{
	//4.	Napisati program koji ucitava dvocifreni broj i ispisuje proizvod cifara i kolicnik prve i druge cifre.

	int broj;
	do
	{
		cout << "Unesite dvocifren broj: ";
		cin >> broj;
	} while (broj<10 || broj >99);

	int cifraJedinica = broj % 10;
	broj /= 10;
	int cifraDesetica = broj % 10;

	cout << "Proizvod cifara iznosi: " << cifraDesetica * cifraJedinica << endl;
	cout << "Kolicnik cifara iznosi: " << cifraDesetica / cifraJedinica << endl;


	system("pause>0");
	return 0;
}
