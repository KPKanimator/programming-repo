#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int m_int = 0xFFFFF;
    int n_int = 0xF0FFF;
    short m_short = m_int;
    short n_short = n_int;

    cout << "m_int = " << m_int << endl;
    cout << "m_short = " << m_short << endl;
    cout << "n_int = " << n_int << endl;
    cout << "n_short = " << n_short << endl;
	return 0;
}
