#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

#pragma region Integers

	//----------------- 16 bit -----------------
	// Tипу short соответствуют типы short int, signed short, signed short int
	// Целое со знаком

	short short_a = -32768;
	short int  short_b = +32767;

	// Целое без знака

	unsigned short    ushort_c = 0;
	unsigned short int  ushort_d = 65535;

	//----------------- 32 bit -----------------
	// Типу int соответствуют типы signed, signed int
	// Целое со знаком

	int    int_e = -2147483648;
	int    int_f = +2147483647;

	// Типу unsigned соответствуют типы unsigned int, unsigned, unsigned int
	// Целое без знака

	unsigned    uint_g = 0;
	unsigned int  uint_h = 4294967295;

	//----------------- 64 bit -----------------
	// Типу long long соответствуют типы long int, signed long, signed long int
	// Целое со знаком

	long long_i = 2147483647999; // 9223372036854775;
	int size_long = sizeof(long);
	long int long_int_i = +9223372036854775807;
	int size_long_int = sizeof(long int);
	long long long_long_i = 214748364799; //9223372036854775;
	int size_long_long = sizeof(long long);

	// Целое без знака

	unsigned long    ulong_k = 0;
	unsigned long int  ulongint_l = 18446744073709551615;

#pragma endregion
#pragma region   Float numbers

	//----------------- 32 bit -----------------

	float m = 1.8E-38f;
	float n = 3.4E+38f;

	//----------------- 64 bit -----------------

	double o = 2.2E-308;
	double p = 1.8E+307;

#pragma endregion
#pragma region Boolean
	//----------------- 8 bit -----------------

	bool s = true;   // 0000 0001
	bool t = false;  // 0000 0000

#pragma endregion
#pragma region Char
	//----------------- 8 bit -----------------

	char u = 'A';
	char a = 'A';
	char b = '\x0041';
	char c = '\u0906';
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
#pragma endregion
#pragma region string

	string w = "Hello world!";

#pragma endregion

	system("pause>nul");
	return EXIT_SUCCESS;
}

