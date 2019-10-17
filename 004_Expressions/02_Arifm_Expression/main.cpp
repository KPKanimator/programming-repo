#include <iostream>
#include <iomanip>
using std::endl;
using std::cout;
using std::cin;

int main()
{
	const double PI = 3.14;
	double y,x;
	//x = !0; // --
	cin>>x;
	y = (pow(std::sin(x),2)+5*x*x+1)/x;
	cout << "\ty ="  << y << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}