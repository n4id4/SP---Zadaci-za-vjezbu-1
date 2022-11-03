#include <iostream>
using namespace std; 

int main()
{
	//14.	Ucitati 2 cijela broja i izracunati im zbir, razliku, proizvod i kolicnik. Ispisati najmanji od 4 dobijena rezultata bez ponavljanja.

	int a, b;
	cin >> a >> b;

	int zbir = a + b, razlika = a - b, proizvod = a * b, kolicnik = a / b;

	if (zbir < proizvod && zbir < razlika && zbir < kolicnik)
		cout << zbir;
	else if (proizvod < zbir && proizvod < razlika && proizvod < kolicnik)
		cout << proizvod;
	else if (razlika < proizvod && razlika < zbir && razlika < kolicnik)
		cout << razlika;
	else
		cout << kolicnik;

	system("pause>0");
	return 0;
}
