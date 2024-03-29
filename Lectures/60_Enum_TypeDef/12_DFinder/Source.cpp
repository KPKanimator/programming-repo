#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include <Windows.h>
using namespace std;

bool find(const list<string>& list, string target)
{
	for (string temp : list)
	{
		if (temp == target)
		{
			return true;
		}
	}
	return false;
}

//int main(string pathin = "", string pathout = "output.txt")
int main(int argc, char* argv[])
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
	/*
	std::cout << "There are " << argc << " arguments:\n";

	// ���������� ������ �������� � ������� ��� ���������� ����� � ��������
	for (int count = 0; count < argc; ++count)
		std::cout << count << " " << argv[count] << '\n';
	*/


	const size_t FILECOUNT = 3;
	if (argc != FILECOUNT)
	{
		cerr << "�������: �� ������� ���� �������� �����!";
	}
	else
	{
		for (int count = 0; count < argc; ++count)
			std::cout << count << " " << argv[count] << '\n';

		ifstream fin(argv[0]);
		ofstream fout(argv[1]);

		if (!fin.is_open() || !fout.is_open())
		{
			cerr << "������� ������� �����!" << endl;
		}
		else
		{
			list<string> commands, uniquecommands;
			string command;

			while (getline(fin, command))
			{
				commands.push_back(command);
			}

			for (string target : commands)
			{
				if (!find(uniquecommands, target))
				{
					uniquecommands.push_back(target);
				}
			}

			for (const string& temp1 : uniquecommands)
			{
				fout << temp1 << endl;
			}

			fin.close();
			fout.close();

			cout << "��������� ������� ���� �������� � " << argv[1] << endl;
		}
	}
	system("pause>nul");
	return EXIT_SUCCESS;
}