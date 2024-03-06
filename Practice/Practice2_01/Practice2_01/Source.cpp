#include <iostream>
#include <fstream>

int main()
{
	using namespace std;
	ofstream outfile("clients.dat");
	int account = 0; 
	char name[10] = {0};
	float balance = 0;
	while (cin >> account >> name >> balance)
	{
		outfile << account << " " << name << " " << balance << endl;
	}
	return EXIT_SUCCESS;
}