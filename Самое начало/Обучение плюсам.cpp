#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
  unsigned int count;
  unsigned int stavka;
  unsigned int guessNum;
  unsigned int realNum;
  unsigned int end;
  setlocale(LC_ALL, "Russian");
  cout << "Добро пожаловать в казино!" << endl;
  cout << "Введите ваш начальный депозит: ";
  cin >> count;
  cout << "Вам необходимо угадать число, 0 или 1. Число же может выпасть от 0 до 2" << endl;
  do
  {
    cout << "Ваш текущий депозит: " << count << endl;
    cout << "Введите вашу ставку: ";
    cin >> stavka;
    cout << "Угадайте число, 0 или 1: ";
    cin >> guessNum;
    realNum = rand() % 3;

    if (guessNum == realNum)
    {
      cout << "Поздравляю!" << endl;
      count += stavka;
    }
    else
    {
      cout << "К сожалению, вы проиграли. Число: " << realNum << endl;
      count -= stavka;
    }

    cout << "Если хотите закончить игру, введите 0: ";
    cin >> end;
    if (end == 0) break;
  } while (count > 0);

  cout << "Игра окончена! Ваш финальный депозит: " << count << endl;
}