#include <iostream>
using namespace std; 

int main()
{
	//7.	Sa tastature ucitati broj x. Varijabli z pridruziti vrijednost prema slijedecem izrazu

	int x,z;
	cin >> x;

	if (x> 2)
		z = x+2;
	else if(x<=2)
		z = x-2;

	cout << z;

	system("pause>0");
	return 0;
}
