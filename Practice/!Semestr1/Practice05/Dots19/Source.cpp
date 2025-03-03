/* 
 * Practice 05
 * Date: 29/10/2024
 * Author: Kirill Korobchinsky
 */

#include <iostream>
using namespace std;

int main()
{
	int x = 0;
	cin >> x;
	x = abs(x);
	x = x % 10;
	cout << x;

	return 0;
}

/* ------  RESULT  -------
123
3


*/

