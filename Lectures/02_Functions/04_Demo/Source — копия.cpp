/*
 * Author: Kirill Korobchinsky
 * 
 * 
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <locale>
#include "windows.h"
using namespace std;
#pragma endregion

// ������� ��� ������������ ������� ������
void setConsoleColor(int color) {
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, color);
}

// ������� ��� ������ ������ � ���� (���������)
void writeToFile() {
  ofstream file("data.txt", ios::out | ios::trunc); // ³������� � ���������
  if (!file) {
    cout << "������� �������� �����!" << endl;
    return;
  }
  string text;
  cout << "������ ����� ��� ������ � ����: ";
  cin.ignore();
  getline(cin, text);
  file << text << endl;
  file.close();
  cout << "����� ������ �������� � ����!" << endl;
}

// ������� ��� ������� �����
void readFromFile() {
  ifstream file("data.txt"); // ³������� ��� �������
  if (!file) {
    cout << "���� �� ��������!" << endl;
    return;
  }
  string line;
  cout << "���� �����:\n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  setConsoleColor(14); // ������ ����
  while (getline(file, line)) {
    cout << line << endl;
  }
  setConsoleColor(7); // ���������� ������������ �������
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  file.close();
}

// ������� ��� ��������� ������ � ����
void appendToFile() {
  ofstream file("data.txt", ios::app); // ³������� � ����� �����������
  if (!file) {
    cout << "������� �������� �����!" << endl;
    return;
  }
  string text;
  cout << "������ ����� ��� ��������� � ����: ";
  cin.ignore();
  getline(cin, text);
  file << text << endl;
  file.close();
  cout << "����� ������ ������ � ����!" << endl;
}

// ������� ��� ������� �� ������ � ���� (fstream)
void readWriteFile() {
  fstream file("data.txt", ios::in | ios::out);
  if (!file) {
    cout << "���� �� �������� ��� ������� ��������!" << endl;
    return;
  }
  cout << "������� ������� ����� �����:\n";
  string line;
  if (getline(file, line)) {
    cout << line << endl;
  }
  else {
    cout << "���� ��������!" << endl;
  }
  file.clear(); // �������� ������� ���� �����
  file.seekp(0, ios::end); // ���������� � ����� �����
  string text;
  cout << "������ ����� ��� ����������� � ����: ";
  cin.ignore();
  getline(cin, text);
  file << text << endl;
  file.close();
  cout << "�������� ��������!" << endl;
}

// ������� ��� ��������� �����
void deleteFile() {
  if (remove("data.txt") == 0) {
    cout << "���� ������ ��������!\n";
  }
  else {
    setConsoleColor(12); // �������� ����
    cout << "�������: ���� �� �������� ��� �� ������� ��������!\n";
		setConsoleColor(7); // ���������� ������������ �������
  }
}

// ���� ��������
int menu() {
  int choice;
  cout << "\n����:\n";
  cout << "0. �����\n";
  cout << "1. ����� � ���� (���������)\n";
  cout << "2. ������� �����\n";
  cout << "3. ��������� � ����\n";
  cout << "4. ������� �� ����� � ����\n";
  cout << "5. ��������� �����\n";
  cout << "������ �����: ";
  cin >> choice;

  return choice;
}

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  do {
		system("cls");
    switch (menu()) {
    case 0: exit(EXIT_SUCCESS);
    case 1: writeToFile(); break;
    case 2: readFromFile(); break;
    case 3: appendToFile(); break;
    case 4: readWriteFile(); break;
    case 5: deleteFile(); break;
    default: cout << "������� ����! ��������� �� ���.\n";
    }
  } while (true);
 
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------


*/

