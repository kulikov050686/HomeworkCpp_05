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

	/// ���������� �������� ��� ������� ����
	/// ���� ���� ��������, �� ���������� true ����� false	
	bool DayOffOrWorkDay(int weekDayStartMonth,   // ���� ������ ������ ������ �� 1 �� 7
		                 int numberOfDaysInMonth, // ���������� ���� � ������ �� 1 �� 31
		                 int dayOfMonth);         // ���� ������ �� 1 �� ���������� ���� � ������

	/// ���������� ����� ��� ������ 
	/// � ����������� �� ��� ������
	int WeekdayNumber(int weekDayStartMonth,   // ���� ������ ������ ������ �� 1 �� 7
		              int numberOfDaysInMonth, // ���������� ���� � ������ �� 1 �� 31
		              int dayOfMonth);         // ���� ������ �� 1 �� ���������� ���� � ������

	/// ��������� ��������� ����� � ��������� [min; max) 
	int Random(int min, int max);

	/// ���������� �������� ��� ������ �� ������
	std::string DayWeek(int day);

	/// ��������� �������� ������ ���� �� ������
	std::string MonthYear(int monthNumber, bool key);

	/// ��������� ������������ �� ����� number ������ numeral
	bool EndOfNumber(int number, int numeral);

	/// ��������� ������������ �� ����� ������� 20 �� 2, 3 ��� 4
	bool ValidationCheck(int number);

	/// ���������� �����
	int NumberOfBanknotes(int amountOfMoney, int nominalValue);

	/// ����������� ���������� �������
	int MinNumberOfBanknotes(int* nominalValue, int Length, int amountOfMoney);

	/// ���������� ���������� ��� ��� ���
	bool LeapYear(int year);
	
	/// ���������� ������������ �������� ���� ��������
	bool DateOfBirth(Date date);

	/// ���������� ���������� ������ ���
	int NumberOfYears(Date date);

	/// ���������� ������� ����������� ������
	int AngularCoefficient(Point2D point1, Point2D point2);

	/// ���������� ��������� �� ���������� ���� �����
	bool CoincidenceOfPoints(Point2D point1, Point2D point2);

public:

	/// ������ 1	
	void Task1();

	/// ������ 2
	void Task2();

	/// ������ 3
	void Task3();

	/// ������ 4
	void Task4();

	/// ������ 5
	void Task5();

	/// ������ 6
	void Task6();

	/// ������ 7
	void Task7();

	/// ������ 8
	void Task8();

	/// ������ 9
	void Task9();
};
