#include <iostream> // Input or output data to console
using namespace std;

int main()
{
	long l = 555;
	cout << " l:\t\t" << l << endl;
	cout << " sizeof:\t" << sizeof(l) << endl; // sizeof - size data type

	long int li = 777.222;
	cout << " li:\t\t" << li << endl;
	cout << " sizeof:\t" << sizeof(li) << endl; // sizeof - size data type

	long long ll = 999.888;
	cout << " ll:\t\t" << ll << endl;
	cout << " sizeof:\t" << sizeof(ll) << endl; // sizeof - size data type

	long long int lli = 999.888;
	cout << " lli:\t\t" << lli << endl;
	cout << " sizeof:\t" << sizeof(lli) << endl; // sizeof - size data type

	system("pause>nul");
	return EXIT_SUCCESS;
}