#include <iostream> // Input or output data to console
#include <string> // for working string functions
using namespace std;

int main()
{
	//double a = ((4, 625 - 13 / 18 * 9 / 26) / 9 / 4 + 2.5 / 1.25 / 6.75) / 1 * 53 / 68;




	cout << (4.625 - 13 / 18 * 9 / 26) / 9 / 4 << endl;
	cout << (4.625 - 13 / 18 * 9 / 26) / (9 / 4) << endl;
	cout << (4.625 - static_cast<double>(13) / 18. * (double)9 / 26) / (9. / 4) << endl;
	cout << ((4.625 - 13. / 18 * (9. / 26)) / (9. / 4) + 2.5 / 1.25 / 6.75) / (68 + 53) / 68. << endl;
	cout << ((4.625F - 13.F / 18 * (9.F / 26)) / (9.F / 4) + 2.5F / 1.25F / 6.75F) / (68 + 53) / 68.F << endl;
	float ch = ((4.625F - 13.F / 18 * (9.F / 26)) / (9.F / 4) + 2.5F / 1.25F / 6.75F) / (68 + 53) / 68.F;
	cout << endl;
	cout << endl;

	unsigned int number = 5;

	std::string stars(number, '*');
	cout << stars;

	unsigned int num = 0;
	cin >> num;
	if (num > 999 or num < 100)
		cout << "The number is not correct!";
	else
	{
		cout << "*****" << endl;
		cout << '*' << num << '*' << endl;
		cout << "*****" << endl;
	}



	system("pause>nul");
	return 0;
}