#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int     quantity = 10;   // количесво единиц товара
	int     price = 75;     // цена за единицу товара
	double  discount = 0.75; // скидка на общую стоимость 25%
	int     cost;            // общая стоимость товара

									// ЕСЛИ: количество тавара 10, или больше. ТО: получить скидку 25%. ИНАЧЕ: скидку не давать.

	cost = (quantity >= 10) ? quantity * price * discount : quantity * price;

	cout << "Общая стоимость товара: " << cost << endl;


	cin.get();
	return 0;
}