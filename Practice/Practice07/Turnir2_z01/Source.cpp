/*
 *
 * Date: 13/11/2024
 * Author: Kirill Korobchinsky
 */

#pragma region Includes
#include <iostream>
#include <iomanip>
using namespace std;
#pragma endregion

int main()
{
	const int N = 9;
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0;
	cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8 >> a9;

	const char* TABL_B = "| ";
	const char* TABL_S = " | ";
	cout << TABL_B << setw(5) << a1 << TABL_S << setw(5) << a2 << TABL_S << setw(5) << a3 << TABL_S << endl;
	cout << TABL_B << setw(5) << a4 << TABL_S << setw(5) << a5 << TABL_S << setw(5) << a6 << TABL_S << endl;
	cout << TABL_B << setw(5) << a7 << TABL_S << setw(5) << a8 << TABL_S << setw(5) << a9 << TABL_S << endl;

	system("pause>nul");
	return 0;
}

/* ------  RESULT  -------
1 2 3 4 5 6 -111 -222 -9999
|     1 |     2 |     3 | 
|     4 |     5 |     6 | 
|  -111 |  -222 | -9999 | 

*/

