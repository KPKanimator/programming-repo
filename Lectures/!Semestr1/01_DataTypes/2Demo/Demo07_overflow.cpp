#include <iostream>
using std::cout;
using std::endl;

int main()
{
    unsigned char ch = 256;
    short m = 32767;
    short n = m+1;

    cout << "ch = " << (int)ch << endl;
    cout << "m = " << m << endl;
    cout << "n = " << n << endl;
	return 0;
}
