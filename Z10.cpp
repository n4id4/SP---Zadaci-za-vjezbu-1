#include <iostream>
using namespace std; 

int main()
{
	//10.	Ucitati 2 realna broja razlicita od 0. Ako su razlicitog predznaka sabrati ih, a ako su istog predznaka pomnoziti ih. Rezulat Ispisati na ekran.

	float broj1, broj2;
	cout << "Unesite dva broja: ";
	cin >> broj1 >> broj2;

	if ((broj1 < 0 && broj2>0) || (broj1 > 0 && broj2 < 0))
		cout << broj1 + broj2;
	else
		cout << broj1 * broj2;

	system("pause>0");
	return 0;
}
