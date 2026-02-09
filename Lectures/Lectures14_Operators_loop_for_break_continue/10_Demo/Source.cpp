#pragma region Includes
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <locale>
#include "windows.h"
using namespace std;
#pragma endregion


int main() {
#pragma region Ukranian
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  // Використовуємо оператор new для виділення пам'яті під змінні (Слайд 17) 
  // Отримуємо покажчик на ціле число для N
  int* ptrN = new int;

  // Отримуємо покажчик для зберігання суми. Використовуємо long long для запобігання переповнення
  long long* ptrSum = new long long;

  // Ініціалізуємо суму нулем через розіменування покажчика (Слайд 11) 
  *ptrSum = 0;

  cout << "Введіть ціле число N (> 0): ";
  // Зчитуємо значення безпосередньо за адресою, яку зберігає покажчик
  cin >> *ptrN;

  // Перевірка умови N > 0
  if (*ptrN > 0) {
    // Логіка циклу: від 0 до *ptrN (щоб досягти значення 2*N)
    // Формула: N^2 + (N+1)^2 + ... + (N+N)^2
    for (int i = 0; i <= *ptrN; i++) {
      // Обчислюємо поточне число (N + i)
      long long currentNumber = *ptrN + i;

      // Додаємо квадрат числа до суми через розіменування *ptrSum
      *ptrSum += (currentNumber * currentNumber);
    }

    // Виводимо результат, використовуючи розіменування
    cout << "Сума квадратів від " << *ptrN << "^2 до " << (2 * (*ptrN)) << "^2 дорівнює: " << *ptrSum << endl;
  }
  else {
    cout << "Помилка: N має бути більше 0." << endl;
  }

  // Звільняємо зарезервовану пам'ять оператором delete (Слайд 18) [cite: 185, 188]
  delete ptrN;
  delete ptrSum;

  // Встановлюємо покажчики в nullptr для безпеки (Слайд 10) [cite: 108]
  ptrN = nullptr;
  ptrSum = nullptr;

  system("pause>nul");
  return EXIT_SUCCESS;
}