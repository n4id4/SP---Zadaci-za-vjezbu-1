#include <iostream>
using namespace std; 

int main()
{
	//11.	Napisati program koji omogucuje unos tri cijela broja putem tastature (a, b i c). Izracunati vrijednot kvadratne jednacine koja glasi ax2 + bx +c po formuli:

	int a, b, c;
	cout << "Unesite a: ";
	cin >> a;
	cout << "Unesite b: ";
	cin >> b;
	cout << "Unesite c: ";
	cin >> c;

	int x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	int x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

	cout << "Prvi rezultat x1 iznosi: " << x1 << endl;
	cout << "Drugi rezultat x2 iznosi: " << x2 << endl;

	system("pause>0");
	return 0;
}
