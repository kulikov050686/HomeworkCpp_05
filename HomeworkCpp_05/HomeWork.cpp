#include "HomeWork.h"

void HomeWork::Task1()
{
	system("cls");
	setlocale(LC_ALL, "rus");

	int medicalAlcohol = 0;
	int firstAidKit = 0;

	std::cout << "������� ���������� ������������ ������ (��): ";
	std::cin >> medicalAlcohol;
	std::cout << "������� ���������� ������� (��): ";
	std::cin >> firstAidKit;

	if (medicalAlcohol >= 2000 && firstAidKit >= 5)
	{
		std::cout << "���������� � ��������� ���������� ��� ������ �� ������." << std::endl;
	}
	else
	{
		std::cout << "���������� � ��������� �� ���������� ��� ������ �� ������." << std::endl;
	}
}

void HomeWork::Task2()
{
	system("cls");
	setlocale(LC_ALL, "rus");
	
	int speed = 0;
	int height = 0;

	std::cout << "������� �������� �������: ";
	std::cin >> speed;
	std::cout << "������� ������ ����� �������: ";
	std::cin >> height;

	if ((750 <= speed && speed <= 850) && (9000 <= height && height <= 9500))
	{
		std::cout << "������ ����� ���������� ��������." << std::endl;
	}
	else
	{
		std::cout << "������ ����� �� � ��� �������." << std::endl;
	}
}

void HomeWork::Task3()
{
}
