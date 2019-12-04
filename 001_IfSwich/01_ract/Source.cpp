#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int num = 15;
	if(num%2 == 0)
		cout<<"Число чётное\n";
	else
		cout << "Число нечётное\n";
	
	// && = and     || = or
	bool z =  true and false;



	cout<<"Input x, y:";
	double x=0,y=0;
	cin>>x>>y;

	if((x>=-2)&&(x<=2)&&(y>=-1)&&(y<=1))
	{
		cout<<"Есть контакт!!!";
	}
	else
	{
		cout << "НЭТ контакт :(";
	}
	cout<<endl;



	system("PAUSE");
	return EXIT_SUCCESS;
}