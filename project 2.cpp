//#include <iostream>
//using namespace std;

//int main() {
  //  int num;
  //  cout << "number: ";
   // cin >> num;

   // int digit1 = num / 1000;  // Тысячные
  //  int digit2 = (num / 100) % 10;  // Сотни
  //  int digit3 = (num / 10) % 10;  // Десятки
  //  int digit4 = num % 10;  // Единицы

  //  if (digit1 == digit4 && digit2 == digit3) {
  //      cout << "0" << endl;
  //  }
  //  else {
//        cout << "1" << endl;
 //   }

 //   return 0;
//}





/*#include <iostream> #include <cmath> #include <iomanip>

int main() {
	double x; std::cout << "Введите значение x: "; std::cin >> x;

	double term = 1; // начальное значение слагаемого
	double sum = 0; // сумма ряда
	int factorial = 1; // значение факториала, используемое для числителя

	while (term > 1e-7) {
		sum += term;

		// вычисление следующего члена ряда и факториала
		term = -x * term / (factorial++ * factorial);
	}

	std::cout << "Приближенное значение e^(-x): " << sum << std::endl;

	return 0;
}*/



/*#include <iostream>
#include <cmath>

int main() {
    double x;
    std::cout << "Введите значение x: ";
    std::cin >> x;
    double sum = 1.0;
    double term = 1.0;
    int i = 1;

    while (std::abs(term) >= 1e-7) {
        term = term * (-x) / i;
        sum = sum + term;
        i++;
    }

    std::cout << "Приближенное значение функции e^(-x): " << sum << std::endl;

    return 0;
}*/


/*#include<iostream>

bool isTriangleExists(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
    int a, b, c, d;

    std::cout << "Введите длины четырех отрезков: ";
    std::cin >> a >> b >> c >> d;

    std::cout << "Различные тройки длин отрезков, из которых можно составить треугольник:" << std::endl;
    if (isTriangleExists(a, b, c)) {
        std::cout << a << " " << b << " " << c << std::endl;
    }
    if (isTriangleExists(a, b, d)) {
        std::cout << a << " " << b << " " << d << std::endl;
    }
    if (isTriangleExists(a, c, d)) {
        std::cout << a << " " << c << " " << d << std::endl;
    }
    /*if (isTriangleExists(b, c, d)) {
        std::cout << b << " " << c << " " << d << std::endl;
    }*/






/*#include<iostream>
#include<cmath>

using namespace std;
int main() {
    for (int i = 0; i < 10; ++i) //Цикл для элемента на 0 позиции
        for (int j = 0; j < 10; ++j)//Цикл для элемента 1 позиции
                for (int k = 0; k < 10; ++k)//Цикл для элемента на 2 позиции
                        std::cout << i << " " << j << " " << k << std::endl; //Вывод
    
}*/



/*#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    cout << "Enter the coordinates of the point: ";
    cin >> x >> y;
    if ((((x * x + y * y) <= 25) && ((((y >= x + 1)) && ((y <= 4 - x * x))) && (y > 0))))
        cout << "The point is inside the area";
    else
        cout << "The point is outside the area";
    return 0;
}*/

#include <iostream>
#include <clocale>
using std::cout;
using std::cin;

void NumSysConvert(int number, int numsys);
char NumInLet(int number);

int main()
{
    setlocale(LC_ALL, "Russian");

    int number(0), numsys(0);

    cout << "введите число: ";
    cin >> number;

    while (true)
    {
        cout << "введите систему счисления: ";
        cin >> numsys;
        if (numsys >= 2 && numsys <= 36)
            break;
        system("cls");
        cout << "неверная система счисления!\n";
        cout << "введенное число: " << number << "\n";
    }

    NumSysConvert(number, numsys);

    system("pause");
    return 0;
}

void NumSysConvert(int number, int numsys)
{
    char* buff = new char[256];
    int count(0);
    while (number)
    {
        buff[count] = NumInLet(number % numsys);
        number /= numsys;
        count++;
    }
    cout << "в (" << numsys << ") системе счисления: ";
    while (count > 0)
    {
        cout << buff[count - 1];
        count--;
    }
    cout << "\n";
}

char NumInLet(int number)
{
    switch (number) {
    case(10):
        return 'A';
    case(11):
        return 'B';
    case(12):
        return 'C';
    case(13):
        return 'D';
    case(14):
        return 'E';
    case(15):
        return 'F';
    case(16):
        return 'G';
    case(17):
        return 'H';
    case(18):
        return 'I';
    case(19):
        return 'J';
    case(20):
        return 'K';
    case(21):
        return 'L';
    case(22):
        return 'M';
    case(23):
        return 'N';
    case(24):
        return 'O';
    case(25):
        return 'P';
    case(26):
        return 'Q';
    case(27):
        return 'R';
    case(28):
        return 'S';
    case(29):
        return 'T';
    case(30):
        return 'U';
    case(31):
        return 'V';
    case(32):
        return 'W';
    case(33):
        return 'X';
    case(34):
        return 'Y';
    case(35):
        return 'Z';
    default:
        return (char)number + '0';
    }
}


















