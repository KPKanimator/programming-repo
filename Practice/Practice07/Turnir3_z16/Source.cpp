/*
 *
 * Date: 27/11/2024
 * Author: Kirill Korobchinsky
 */

#pragma region Includes
#include <iostream>
#include <iomanip>
using namespace std;
#pragma endregion

// -3 0
// -4 2 (+1)
// -5 -3 0
int main()
{
	int sm = 0, m = 0, n = 0, count_3 = 0;
	long long sum = 0;
	cin >> m >> n;
	if (m < 0) sm = -m;
	count_3 = (sm + n ) / 3 + 1;

	int i = m;
	for (; i <= n; i++)
		if (abs(i) % 3 == 0)
		{
			sum += i;
			break;
		}
	i += 3;
	for (; i <= n; i+=3)
	{
		if (abs(i) % 3 == 0)
		{
			sum += i;
		}
	}
	cout << count_3 << " " << sum;

	system("pause>nul");
	return 0;
}

/* ------  RESULT  -------
int main()
{
	int m = 0, n = 0, count_3 = 0;
	long long sum = 0;
	cin >> m >> n;
	int i = m;
	for (; i <= n; i++)
		if (abs(i) % 3 == 0)
		{
			count_3++;
			sum += i;
			break;
		}
	i += 3;
	for (; i <= n; i+=3)
	{
		if (abs(i) % 3 == 0)
		{
			count_3++;
			sum += i;
		}
	}
	cout << count_3 << " " << sum;

	system("pause>nul");
	return 0;
}

*/

