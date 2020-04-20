#pragma once
#include <iostream>
#include <exception>
#include <random>
#include <ctime>

class HomeWork
{
private:

	struct Date
	{
		int year = 0;
		int month = 0;
		int day = 0;
	};

	struct Point2D
	{
		int x = 0;
		int y = 0;
	};

	/// Определяет выходной или рабочий день
	/// Если день выходной, то возвращает true иначе false	
	bool DayOffOrWorkDay(int weekDayStartMonth,   // День недели начала месяца от 1 до 7
		                 int numberOfDaysInMonth, // Количество дней в месяце от 1 до 31
		                 int dayOfMonth);         // День месяца от 1 до количества дней в месяце

	/// Определяет номер дня недели 
	/// в зависимости от дня месяца
	int WeekdayNumber(int weekDayStartMonth,   // День недели начала месяца от 1 до 7
		              int numberOfDaysInMonth, // Количество дней в месяце от 1 до 31
		              int dayOfMonth);         // День месяца от 1 до количества дней в месяце

	/// Генератор случайных чисел в диапазоне [min; max) 
	int Random(int min, int max);

	/// Возвращает название дня недели по номеру
	std::string DayWeek(int day);

	/// Возращает название месяца года по номеру
	std::string MonthYear(int monthNumber, bool key);

	/// Проверяет оканчивается ли число number цифрой numeral
	bool EndOfNumber(int number, int numeral);

	/// Проверяет оканчивается ли число большее 20 на 2, 3 или 4
	bool ValidationCheck(int number);

	/// Количество купюр
	int NumberOfBanknotes(int amountOfMoney, int nominalValue);

	/// Минимальное количество банкнот
	int MinNumberOfBanknotes(int* nominalValue, int Length, int amountOfMoney);

	/// Определяет високосный год или нет
	bool LeapYear(int year);
	
	/// Определяет правильность введения даты рождения
	bool DateOfBirth(Date date);

	/// Определяет количество полных лет
	int NumberOfYears(Date date, Date nowDate);

	/// Определяет угловой коэффициент прямой
	float AngularCoefficient(Point2D point1, Point2D point2);

	/// Определяет совпадают ли координаты двух точек
	bool CoincidenceOfPoints(Point2D point1, Point2D point2);

public:

	/// Задача 1	
	void Task1();

	/// Задача 2
	void Task2();

	/// Задача 3
	void Task3();

	/// Задача 4
	void Task4();

	/// Задача 5
	void Task5();

	/// Задача 6
	void Task6();

	/// Задача 7
	void Task7();

	/// Задача 8
	void Task8();

	/// Задача 9
	void Task9();
};
