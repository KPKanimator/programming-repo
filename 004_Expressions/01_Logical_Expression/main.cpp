#include <iostream>
#include <iomanip>
using std::endl;
using std::cout;

int main()
{
	const int X = -1;
	bool a=true, b=true, z;
	//z = !a || b && (X>5);
	z = !a or b and (X>5);
	cout<<"\tz ="<<std::boolalpha<<z<<endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}