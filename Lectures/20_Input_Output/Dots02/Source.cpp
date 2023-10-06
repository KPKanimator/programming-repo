/*
 *
 * Date: 04/10/2023
 * Author: Kirill Korobchinsky
 */
#define _USE_MATH_DEFINES

#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	cout << "The next number for " << n << " is " << (n + 1) << ".\n";
	cout << "The previous number for " << n << " is " << (n - 1) << "." << endl;

	return EXIT_SUCCESS;
}

/* ------  RESULT  -------
17
The next number for 17 is 18.
The previous number for 17 is 16.


*/

