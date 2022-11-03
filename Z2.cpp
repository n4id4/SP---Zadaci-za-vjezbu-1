#include <iostream>
using namespace std; 

int main()
{
	//2.	Izracunati obim, povrsinu i zapreminu (volumen) kvadra. Omoguciti unos stranica a,b i c putem konzole.

	int a, b,c;
	cout << "Unesite duzinu prve stranice: ";
	cin >> a;
	cout << "Unesite duzinu druge stranice: ";
	cin >> b;
	cout << "Unesite duzinu trece stranice: ";
	cin >> c;

	int obim = 4 * (a + b + c), povrsina = 2 * (a * b + a * c + b * c), volumen = a * b * c;

	cout << "Obim kvadra iznosi: " << obim << endl;
	cout << "Povrsina kvadra iznosi: " << povrsina << endl;
	cout << "Volumen kvadra iznosi: " << volumen << endl;


	system("pause>0");
	return 0;
}
