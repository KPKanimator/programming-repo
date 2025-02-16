#include <iostream>
using std::cout;
using std::endl;

int main()
{
    short m_short = 0xFFFF;
    unsigned short n_short = 0xFFFF;
    int m_int = m_short;
    int n_int = n_short;

    cout << "m_short = " << m_short << endl;
    cout << "m_int = " << m_int << endl;
    cout << "n_short = " << n_short << endl;
    cout << "n_int = " << n_int << endl;
	return 0;
}
