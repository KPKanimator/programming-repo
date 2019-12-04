#include <iostream>
#include <time.h>
#include <vector>
using namespace std;

int main()
{
	const int M = 3; // row
	const int N = 4; // col
	typedef int ArrayType;
	ArrayType x[M][N];
	srand(static_cast<unsigned int>(time(nullptr)));
	cout << "x = \n";
	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			x[i][j] = 10 + rand() % 30; //10..40
			cout << x[i][j] << "  ";
		}
		cout << endl;
	}

	vector<ArrayType> y;
	int sizeY = 0; // real size array Y
	for (int i = 0; i < M; ++i)
		for (int j = 0; j < N; ++j)
			if (x[i][j] > 0 and x[i][j] % 2 == 0)
				y.push_back(x[i][j]);

	cout << "y = ";
	for (int i = 0; i < y.size(); ++i)
		cout << y[i] << " ";
	cout << endl << endl;

	system("pause");
	return EXIT_SUCCESS;
}