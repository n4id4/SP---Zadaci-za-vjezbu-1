#include <iostream>
using namespace std; 

int main()
{
	//9.	Učitati prirodan broj. Ako je neparan ispisati njegovu recipročnu vrijednost, a ako je paran ispisati kvadratni korijen njegovog sljedbenika

	int broj;
	cout << "Unesite broj ";
	cin >> broj;

	if (broj % 2 != 0)
		cout << "Reciprocna vrijednost broja " << broj << " iznosi: " << 1.0 / broj;
	else
		cout << "Kvadratni korijen sljedbenika broja " << broj << " iznosi : " << sqrt(broj + 1) << endl;

	system("pause>0");
	return 0;
}
