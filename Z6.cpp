#include <iostream>
using namespace std; 

int main()
{
	//6.	Napisati program za odredjivanje z po formuli:

	int x,y,z;
	cin >> x;
	cin >> y;

	if (x-y< 2)
		z = x+y;
	else 
		z = x-y;

	cout << z;

	system("pause>0");
	return 0;
}
