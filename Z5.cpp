#include <iostream>
using namespace std; 

int main()
{
	//5.	Na osnovu datog izraza upisati odgovarajucu vrijednost varijable z.

	int x,z;
	cin >> x;

	if (x >= 0)
		z = 1;
	else if (x < 0)
		z = 0;

	cout << z;

	system("pause>0");
	return 0;
}
