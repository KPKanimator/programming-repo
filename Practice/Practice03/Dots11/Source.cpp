#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float ch, zn, y;
	ch = 0.3F * powf(5, 2) - 15;
	zn = 3.5F + powf(2, 2);
	y = ch / zn;

	cout << y;
	//system("pause>nul");
	return EXIT_SUCCESS;
}