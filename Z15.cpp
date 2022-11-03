#include <iostream>
using namespace std; 

int main()
{
	//15.	Ucitati 3 razlicita realna broja. Ispisati ih u rastucem redoslijedu na ekran.
	
	float a, b, c;
	cout << "Unesite tri razlicita broja: ";
	cin >> a >> b >> c;

	if (a > b && a > c)
	{
		cout << a << " ";
		if (b > c)
			cout << b << " " << c;
		else
			cout << c << " " << b;
	}
	else if (b > a && b > c)
	{
		cout << b << " ";
		if (a > c)
			cout << a << " " << c;
		else
			cout << c << " " << a;
	}
	else
	{
		cout << c << " ";
		if (a > b)
			cout << a << " " << b;
		else
			cout << b << " " << a;
	}

	system("pause>0");
	return 0;
}
