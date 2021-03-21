#include <iostream>
#include <iomanip>
#include <sstream>
#include <random>
#include <ctime>

int main() {


	int min = 10;
	int max = 20;
	int value, a = 1, b, c = 3;
	std::minstd_rand gen(time(nullptr));
	value = min + gen() % (max - min + 1);
	std::cout << "Начальное кол-во " << value << std::endl;

	while (value != 0) {
		if (value >= 3) {
			for (int i=1; i<=3; i++)
			if (((value-1)-i)%4==0) {a=i; }
			if (value==3) {a=2; }
		} else {
			if (value==2) {a=1; }
		}
		std::cout << "ПК взял: " << a << std::endl;
		value = value - a;
		if (value <= 0) {
			goto ex;
		}
		std::cout << "Камней Осталось: " << value << std::endl;
		std::cin >> b;
		if (b >= 4 || b <= 0) {
			std::cout << "Больше трех брать нельзя!" << std::endl;
			while (b >= 4 || b <= 0) {
				std::cin >> b;
			}
			value -= b;
		} else {
			value = value - b;
			if (value <= 0) {
				c = 0;
				goto ex;
			}
		}

	}
	ex:

	if (c == 0)
		std::cout << "Вы проиграли =(" << std::endl;
	else

		std::cout << "Победа! =))" << std::endl;

	return 0;
}
