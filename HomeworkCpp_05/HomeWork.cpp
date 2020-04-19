#include "HomeWork.h"

bool HomeWork::DayOffOrWorkDay(int weekDayStartMonth, int numberOfDaysInMonth, int dayOfMonth)
{
	if (1 <= weekDayStartMonth && weekDayStartMonth <= 7)
	{
		if (1 <= numberOfDaysInMonth && numberOfDaysInMonth <= 31)
		{
			if (1 <= dayOfMonth && dayOfMonth <= numberOfDaysInMonth)
			{
				unsigned short k = weekDayStartMonth;

				for (unsigned short i = 1; i <= numberOfDaysInMonth; i++)
				{
					if (i == dayOfMonth)
					{
						if (k == 7 || k == 6)
						{
							return true;
						}

						return false;
					}

					if (k == 7)
					{
						k = 1;
					}
					else
					{
						k++;
					}
				}
			}
		}
	}
	
	throw std::exception("Error!!!");
}

int HomeWork::WeekdayNumber(int weekDayStartMonth, int numberOfDaysInMonth, int dayOfMonth)
{
	if (1 <= weekDayStartMonth && weekDayStartMonth <= 7)
	{
		if (1 <= numberOfDaysInMonth && numberOfDaysInMonth <= 31)
		{
			if (1 <= dayOfMonth && dayOfMonth <= numberOfDaysInMonth)
			{
				unsigned short k = weekDayStartMonth;

				for (unsigned short i = 1; i <= numberOfDaysInMonth; i++)
				{
					if (i == dayOfMonth)
					{
						return k;
					}

					if (k == 7)
					{
						k = 1;
					}
					else
					{
						k++;
					}
				}
			}
		}
	}

	return 0;
}

int HomeWork::Random(int min, int max)
{	
	std::random_device rd;	
	std::mt19937 mersenne(rd());

	return min + mersenne() % (max - min);
}

std::string HomeWork::DayWeek(int day)
{
	setlocale(LC_ALL, "rus");

	std::string strDay = "";

	switch (day)
	{
	case 1:
		strDay = "понедельник";
		break;
	case 2:
		strDay = "вторник";
		break;
	case 3:
		strDay = "среда";
		break;
	case 4:
		strDay = "четверг";
		break;
	case 5:
		strDay = "пятница";
		break;
	case 6:
		strDay = "суббота";
		break;
	case 7:
		strDay = "воскресенье";
		break;
	default:
		strDay = "Такого дня недели не существует!";
		break;
	}
	
	return strDay;
}

std::string HomeWork::MonthYear(int monthNumber, bool key)
{
	setlocale(LC_ALL, "rus");

	std::string month = "";
	key = false;

	switch (monthNumber)
	{
	case 1:
		if (key)
		{
			month = "январь";
		}
		else
		{
			month = "января";
		}
		break;
	case 2:
		if (key)
		{
			month = "февраль";
		}
		else
		{
			month = "февраля";
		}
		break;
	case 3:
		if (key)
		{
			month = "март";
		}
		else
		{
			month = "марта";
		}
		break;
	case 4:
		if (key)
		{
			month = "апрель";
		}
		else
		{
			month = "апреля";
		}
		break;
	case 5:
		if (key)
		{
			month = "май";
		}
		else
		{
			month = "мая";
		}
		break;
	case 6:
		if (key)
		{
			month = "июнь";
		}
		else
		{
			month = "июня";
		}
		break;
	case 7:
		if (key)
		{
			month = "июль";
		}
		else
		{
			month = "июля";
		}
		break;
	case 8:
		if (key)
		{
			month = "август";
		}
		else
		{
			month = "августа";
		}
		break;
	case 9:
		if (key)
		{
			month = "сентябрь";
		}
		else
		{
			month = "сентября";
		}
		break;
	case 10:
		if (key)
		{
			month = "октябрь";
		}
		else
		{
			month = "октября";
		}
		break;
	case 11:
		if (key)
		{
			month = "ноябрь";
		}
		else
		{
			month = "ноября";
		}
		break;
	case 12:
		if (key)
		{
			month = "декабрь";
		}
		else
		{
			month = "декабря";
		}
		break;
	default:
		month = "Такого месяца не существует!";
		break;
	}

	return month;
}

bool HomeWork::EndOfNumber(int number, int numeral)
{
	return number % 10 == numeral;
}

bool HomeWork::ValidationCheck(int number)
{
	if (number > 20)
	{
		return EndOfNumber(number, 2) ||
			   EndOfNumber(number, 3) ||
			   EndOfNumber(number, 4);
	}

	return false;
}

int HomeWork::NumberOfBanknotes(int amountOfMoney, int nominalValue)
{
	if (nominalValue != 0)
	{
		return amountOfMoney / nominalValue;
	}
	
	return 0;
}

int HomeWork::MinNumberOfBanknotes(int* nominalValue, int length, int amountOfMoney)
{
	int numberOfBanknotes = 0;
	
	for (int i = 0; i < length; i++)
	{
		if (amountOfMoney >= nominalValue[i])
		{
			numberOfBanknotes += NumberOfBanknotes(amountOfMoney, nominalValue[i]);
			std::cout << "Количество купюр номиналом " << nominalValue[i] << " :" << NumberOfBanknotes(amountOfMoney, nominalValue[i]) << std::endl;
			amountOfMoney -= nominalValue[i] * NumberOfBanknotes(amountOfMoney, nominalValue[i]);
		}
	}

	return numberOfBanknotes;
}

bool HomeWork::LeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool HomeWork::DateOfBirth(Date date)
{
	int yearOfBirth = date.year;
	int monthOfBirth = date.month;
	int birthDay = date.day;

	if (yearOfBirth > 1900)
	{
		if (1 <= monthOfBirth && monthOfBirth <= 12)
		{
			if ((monthOfBirth == 1 ||
				 monthOfBirth == 3 ||
				 monthOfBirth == 5 ||
				 monthOfBirth == 7 ||
				 monthOfBirth == 8 ||
				 monthOfBirth == 10 ||
				 monthOfBirth == 12) &&
				(1 <= birthDay && birthDay <= 31))
			{
				return true;
			}

			if (monthOfBirth == 2 && !LeapYear(yearOfBirth) && ((1 <= birthDay && birthDay <= 28)))
			{
				return true;
			}

			if (monthOfBirth == 2 && LeapYear(yearOfBirth) && ((1 <= birthDay && birthDay <= 29)))
			{
				return true;
			}

			if ((monthOfBirth == 4 || 
				 monthOfBirth == 6 || 
				 monthOfBirth == 9 || 
				 monthOfBirth == 11) && 
				(1 <= birthDay && birthDay <= 30))
			{
				return true;
			}
		}		
	}
	
	return false;
}

int HomeWork::NumberOfYears(Date date)
{
	time_t now = time(0);
	tm localTime;
	localtime_s(&localTime, &now);

	int nowYear = localTime.tm_year + 1900;
	int nowMonth = localTime.tm_mon + 1;
	int nowDay = localTime.tm_mday;

	if (nowYear > date.year)
	{
		int K = (nowYear - 1) - date.year;
						
		if (nowMonth - date.month > 0)
		{
			K++;
		}
		
		if (nowMonth - date.month == 0)
		{
			if (nowDay - date.day > 0)
			{
				K++;
			}			
		}

		return K;
	}	

	return 0;
}

int HomeWork::AngularCoefficient(Point2D point1, Point2D point2)
{
	if (point2.x - point1.x != 0)
	{
		return (point2.y - point1.y) / (point2.x - point1.x);
	}

	throw std::exception("Error!!!");
}

bool HomeWork::CoincidenceOfPoints(Point2D point1, Point2D point2)
{
	return (point1.x == point2.x) && (point1.y == point2.y);
}

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
	system("cls");
	setlocale(LC_ALL, "rus");

	int day = 0;
	int startDay = 1;

	std::cout << "Первый день мая месяца: " << DayWeek(startDay) << std::endl;
	std::cout << "Введите день мая месяца (1 - 31): ";
	std::cin >> day;
	
	if (1 <= day && day <= 31)
	{
		if (DayOffOrWorkDay(startDay, 31, day) || (1 <= day && day <= 5) || (8 <= day && day <= 10))
		{
			std::cout << "Выходной день." << std::endl;
		}
		else
		{
			std::cout << "Рабочий день." << std::endl;
		}
	}
	else
	{
		std::cout << "Такого дня месяца не существует!" << std::endl;
	}	
}

void HomeWork::Task4()
{
	system("cls");
	setlocale(LC_ALL, "rus");

	int day = 0;
	int startDay = Random(1, 8);

	std::cout << "Первый день мая месяца: " << DayWeek(startDay) << std::endl;
	std::cout << "Введите день мая месяца (1 - 31): ";
	std::cin >> day;

	if (1 <= day && day <= 31)
	{
		if (DayOffOrWorkDay(startDay, 31, day) || (1 <= day && day <= 5) || (8 <= day && day <= 10))
		{
			std::cout << DayWeek(WeekdayNumber(startDay, 31, day)) << ": Выходной день!" << std::endl;
		}
		else
		{
			std::cout << DayWeek(WeekdayNumber(startDay, 31, day)) << ": Рабочий день." << std::endl;
		}
	}
	else
	{
		std::cout << "Такого дня месяца не существует!" << std::endl;
	}
}

void HomeWork::Task5()
{
	system("cls");
	setlocale(LC_ALL, "rus");

	int price = 0;

	std::cout << "Введите цену товара: ";
	std::cin >> price;

	std::cout << "Ответ: " << price;

	if (EndOfNumber(price, 1) && price != 11)
	{
		std::cout << " рубль" << std::endl;
	}
	else
	{
		if (price < 5 || ValidationCheck(price))
		{
			std::cout << " рубля" << std::endl;
		}
		else
		{
			std::cout << " рублей" << std::endl;
		}
	}	
}

void HomeWork::Task6()
{
	system("cls");
	setlocale(LC_ALL, "rus");

	int a = 0, b = 0, c = 0; // Размеры первой коробки 
	int m = 0, n = 0, k = 0; // Размеры второй коробки
	
	std::cout << "Введите размер первой коробки" << std::endl;
	std::cout << "A= ";
	std::cin >> a;
	std::cout << "B= ";
	std::cin >> b;
	std::cout << "C= ";
	std::cin >> c;
	std::cout << "Введите размер второй коробки" << std::endl;
	std::cout << "M= ";
	std::cin >> m;
	std::cout << "N= ";
	std::cin >> n;
	std::cout << "K= ";
	std::cin >> k;
	std::cout << "------------------------------" << std::endl;

	if (a > b) std::swap(a, b);
	if (a > c) std::swap(a, c);
	if (b > c) std::swap(b, c);

	if (m > n) std::swap(m, n);
	if (m > k) std::swap(m, k);
	if (n > k) std::swap(n, k);

	if (a == m && b == n && c == k)
	{
		std::cout << "Коробки одинаковые." << std::endl;
	}
	else
	{
		if (a < m && b < n && c < k)
		{
			std::cout << "Первую коробку можно вложить во вторую" << std::endl;
		}
		else
		{
			std::cout << "Первую коробку НЕ возможно вложить во вторую" << std::endl;
		}
	}	
}

void HomeWork::Task7()
{
	system("cls");
	setlocale(LC_ALL, "rus");

	int nominalValue[] = { 5000, 2000, 1000, 500, 200, 100 };
	int length = sizeof(nominalValue) / sizeof(nominalValue[0]);
	int amountOfMoney = 0;

	std::cout << "Введите сумму: ";
	std::cin >> amountOfMoney;

	if (100 <= amountOfMoney && amountOfMoney <= 150000)
	{
		if (amountOfMoney % 100 == 0)
		{
			int min = MinNumberOfBanknotes(nominalValue, length, amountOfMoney);

			std::cout << "-------------------------------------------------" << std::endl;
			std::cout << "Минимальное количество купюр: " << min << std::endl;			
		}
		else
		{
			std::cout << "Введённая сумма должна быть кратна 100" << std::endl;
		}
	}
	else
	{
		std::cout << "Банкомат не выдаёт сумму больше 150 000" << std::endl;
	}
}

void HomeWork::Task8()
{
	system("cls");
	setlocale(LC_ALL, "rus");
	
	Date date;

	std::cout << "Введите год рождения: ";
	std::cin >> date.year;
	std::cout << "Введите месяц рождения: ";
	std::cin >> date.month;
	std::cout << "Введите день рождения: ";
	std::cin >> date.day;
	
	if (DateOfBirth(date))
	{
		time_t now = time(0);
		tm localTime;
		localtime_s(&localTime, &now);

		Date nowDate;

		nowDate.year = localTime.tm_year + 1900;
		nowDate.month = localTime.tm_mon + 1;
		nowDate.day = localTime.tm_mday;

		std::cout << "Сегодня:       " << nowDate.day << " " << MonthYear(nowDate.month, false) << " " << nowDate.year << std::endl;
		std::cout << "Дата рождения: " << date.day << " " << MonthYear(date.month, false) << " " << date.year << std::endl;
		std::cout << "-----------------------------------------" << std::endl;
		std::cout << "Количество лет: " << NumberOfYears(date) << std::endl;

		if (NumberOfYears(date) < 18)
		{
			std::cout << "Продажа алкоголя ЗАПРЕЩЕНА!" << std::endl;
		}
		else
		{
			std::cout << "Продажа алкоголя РАЗРЕШЕНА!" << std::endl;
		}
	}
	else
	{
		std::cout << "Такой даты рождения не может быть!!!" << std::endl;
	}
}

void HomeWork::Task9()
{
	system("cls");
	setlocale(LC_ALL, "rus");

	Point2D a;
	Point2D b;
	Point2D c;

	std::cout << "Введите координаты точки А:" << std::endl;
	std::cout << "x1 = ";
	std::cin >> a.x;
	std::cout << "y1 = ";
	std::cin >> a.y;

	std::cout << "Введите координаты точки B:" << std::endl;
	std::cout << "x2 = ";
	std::cin >> b.x;
	std::cout << "y2 = ";
	std::cin >> b.y;

	std::cout << "Введите координаты точки C:" << std::endl;
	std::cout << "x3 = ";
	std::cin >> c.x;
	std::cout << "y3 = ";
	std::cin >> c.y;
	
	if (CoincidenceOfPoints(a,b) || CoincidenceOfPoints(a,c) || CoincidenceOfPoints(b,c))
	{
		std::cout << "Введённые точки образовывать треугольник не могут!" << std::endl;
	}
	else
	{
		if ((a.x != b.x) && (a.x != c.x) && (b.x != c.x))
		{
			int k1 = AngularCoefficient(a, b);
			int k2 = AngularCoefficient(a, c);

			if (k1 != k2)
			{
				std::cout << "Введённые точки могут образовывать треугольник!" << std::endl;
			}
			else
			{
				std::cout << "Введённые точки образовывать треугольник НЕ могут!" << std::endl;
			}
		}
		else
		{
			if (((a.x == b.x) && (a.x != c.x) && (b.x != c.x)) || 
				((a.x != b.x) && (a.x == c.x) && (b.x != c.x)) || 
				((a.x != b.x) && (a.x != c.x) && (b.x == c.x)))
			{
				std::cout << "Введённые точки могут образовывать треугольник!" << std::endl;
			}
			else
			{
				std::cout << "Введённые точки образовывать треугольник НЕ могут!" << std::endl;
			}
		}
	}	
}
