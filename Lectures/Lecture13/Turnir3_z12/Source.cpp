#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	double r1 = static_cast<double>(c - b) / a;
	double r2 = static_cast<double>(-c - b) / a;
	cout << fixed << setprecision(3) << r1 << " " << r2;

	system("pause");
	return 0;
}