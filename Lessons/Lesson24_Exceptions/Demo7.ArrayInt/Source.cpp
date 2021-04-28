#include <iostream>
#include <string>
using namespace std;

class ArrayException
{
private:
	string m_error;

public:
	ArrayException(string error)
		: m_error(error)
	{
	}
	const char* getError() { return m_error.c_str(); }
};

const int MAX_SIZE = 4;
class ArrayInt
{
private:
	int m_data[MAX_SIZE] = {0};
public:
	ArrayInt() {}
	int getLength() { return MAX_SIZE; }
	int& operator[](const int index)
	{
		if (index < 0 || index >= getLength())
			throw ArrayException("Invalid index");
		return m_data[index];
	}
};

int main()
{
	ArrayInt array;
	try
	{
		int value = array[7];
	}
	catch (ArrayException& exception)
	{
		cerr << "An array exception occurred (" << exception.getError() << ")\n";
	}
}