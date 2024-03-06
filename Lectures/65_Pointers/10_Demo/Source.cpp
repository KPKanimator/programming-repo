#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int t = 0;
	bool w = 0;
	cin >> t;
	int* n = new int[t];
	int* m = new int[t];
	for (int i = 0; i < t; i++)
		cin >> n[i] >> m[i];
	for (int i = 0; i < t; i++)
	{
		//(100 / 5) % 2 == 0 && (100 % 5)
		w = (n[i] / m[i]) % 2 == 0 && (n[i] % 2) == 0;
		if (!w)
			cout << "1 ";
		else
			cout << "2 ";
	}
	delete[] n;
	delete[] m;

	//cin >> t;
	return 0;
}