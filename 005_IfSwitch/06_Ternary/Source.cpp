#include <iostream>

using namespace std;

int main()
{
	int a = 8, b = 7, c = 1, max = -1;

	max = (a < b) ? c = b : c = a;  // сачала с = b, а только потом max = с

	cout << max << endl;

	cin.get();
	return 0;
}