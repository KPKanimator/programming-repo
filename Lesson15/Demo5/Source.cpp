#include <iostream>
using namespace std;

int main()
{
  setlocale(LC_ALL, "");
  unsigned int n, q;
  cout << "¬ведите количество чисел: ";
  cin >> n;
  int rest;
  for (int i = 0; i < n; ++i)
  {
    cout << "¬ведите q: ";
    cin >> q;
    cout << endl;
    // Task3: обладают тем свойством, что корни уравнени€ x2 + 3qi Ц 5 действительны и положительны.
    if (5 - 3 * q > 0)
      cout << "«начение q имеет положительное и действительное решение ур-и€\n";
    // Task2: при делении на 7 дают остаток 1, 2 или 5;
    rest = q % 7;
    if (rest == 1 or rest == 2 or rest == 5)
      cout << "«начение q при делении на 7 даЄт остаток 1, 2 или 5\n";
    // Task1: €вл€ютс€ удвоенными нечетными числами;
    rest = q / 2;
    if(rest % 2 != 0 )
      cout << "«начение q €вл€eтс€ удвоенным нечетным числoм\n";
  }

  system("pause");
  return EXIT_SUCCESS;
}