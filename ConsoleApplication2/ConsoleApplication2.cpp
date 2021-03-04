#include <iostream>
using namespace std;

extern int j, v, n, m;

int main()
{


	int a = 10, b = 5, c = 10, d = 20;

	float e = static_cast <float> (c) / d;

	cout << "test 1 " << e << endl;

	float g = a * (b + e);

	cout << " 1 zadanie = " << g << endl;





	int h = 5, x;

	x = (h <= 21) ? h - 21 : (h - 21) * 2;


	cout << " 2 zadanie = " << x << endl;




	const int size = 3;
	char Cube[size][size][size];

	int z, l, * ptr;
	
	l = Cube [1][1][1];
	z = 5;
	ptr = &z;
	
	l = *ptr;

	*ptr = Cube[1][1][1];


	cout << " 3 zadanie = " << l << endl; 



	float k = static_cast <float> (n) / m;

	cout << "test 2 " << k << endl;

	float y = j * (v + k);

	cout << " 4 zadanie = " << y << endl; 


	return 0;


}