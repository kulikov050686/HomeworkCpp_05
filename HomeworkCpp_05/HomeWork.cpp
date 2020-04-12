#include "HomeWork.h"

void HomeWork::Task1()
{
	system("cls");
	setlocale(LC_ALL, "rus");

	int medicalAlcohol = 0;
	int firstAidKit = 0;

	std::cout << "Введите количество медицинского спирта (мл): ";
	std::cin >> medicalAlcohol;
	std::cout << "Введите количество аптечек (шт): ";
	std::cin >> firstAidKit;

	if (medicalAlcohol >= 2000 && firstAidKit >= 5)
	{
		std::cout << "Снаряжение у фельдшера достаточно для выхода на работу." << std::endl;
	}
	else
	{
		std::cout << "Снаряжение у фельдшера НЕ достаточно для выхода на работу." << std::endl;
	}
}

void HomeWork::Task2()
{
	system("cls");
	setlocale(LC_ALL, "rus");
	
	int speed = 0;
	int height = 0;

	std::cout << "Введите скорость самолёта: ";
	std::cin >> speed;
	std::cout << "Введите высоту полёта самолёта: ";
	std::cin >> height;

	if ((750 <= speed && speed <= 850) && (9000 <= height && height <= 9500))
	{
		std::cout << "Самолёт летит правильным эшелоном." << std::endl;
	}
	else
	{
		std::cout << "Самолёт летит не в том эшелоне." << std::endl;
	}
}

void HomeWork::Task3()
{
}
