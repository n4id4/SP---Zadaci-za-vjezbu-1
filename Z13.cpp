#include <iostream>
using namespace std; 

int main()
{
	//13.	Napisati program koji od korisnika trazi unos broja sati. Na osnovu unesenog broja sata ispisati odgovarajucu poruku:

	int brSati;
	cout << "Unesite broj sati: ";
	cin >> brSati;

	if (brSati >= 0 && brSati <= 8)
		cout << "Dobro jutro!";
	else if (brSati >= 9 && brSati <= 18)
		cout << "Dobar dan!";
	else
		cout << "Dobro veče!";

	system("pause>0");
	return 0;
}
