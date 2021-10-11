#define _CRT_SECURE_NO_WARNINGS
#include "Koleso.h"
#include <iostream>
#include <conio.h>
using namespace std;

Koleso::Koleso()
{
	visota = -1;
	shirina = -1;
	diametr = -1;
	tip_diska[0] = '\0';
}

void Koleso::new_koleso_info()
{
	system("cls");
	cout << "Добавление информации о колесах автомобиля\n\nВведите ширину колеса: ";
	while (scanf("%lf", &shirina) != 1 || shirina < 0)
	{
		printf("Неверно введено значение ширины колеса, попробуйте еще: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');

	cout << "Введите высоту колеса: ";
	while (scanf("%lf", &visota) != 1 || visota < 0)
	{
		printf("Неверно введено значение высоты колеса, попробуйте еще: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');

	cout << "Введите диаметр колеса в дюймах: ";
	while (scanf("%lf", &diametr) != 1 || diametr < 0)
	{
		printf("Неверно введено значение диаметра колеса, попробуйте еще: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');

	cout << "Введите тип колесного диска (штамповка/литье/ковка): ";
	gets_s(tip_diska);
	while (strlen(tip_diska) == 0)
	{
		printf("Неверно введен тип колесного диска, попробуйте еще: ");
		gets_s(tip_diska);
	}
}

//функция создания колеса
void Koleso::new_koleso(double shirina_1, double visota_1, double diametr_1, char tip_diska_1[20])
{
	strcpy(tip_diska, tip_diska_1);
	shirina = shirina_1;
	visota = visota_1;
	diametr = diametr_1;
}

//функция вывода информации о колесе
void Koleso::prosmotr_koleso()
{
	if (visota >= 0)
	{
		cout << "\n\nИНФОРМАЦИЯ О КОЛЕСАХ\nШирина колеса: " << shirina;
		cout << "\nДиаметр колеса: " << diametr;
		cout << "\nВысота колеса: " << visota;
		cout << "\nТип диска: " << tip_diska;
	}
	else
	{
		cout << "Информация о колесе еще не была добавлена";
	}
}

void Koleso::koleso_diamter()
{
	if (visota >= 0)
	{
		double diametr;
		cout << "Введите новый диаметр колеса: ";
		while (scanf("%lf", &diametr) != 1 || diametr < 0)
		{
			printf("Неверно введено значение диаметра, попробуйте еще: ");
			while (getchar() != '\n');
		}
		while (getchar() != '\n');
		diametr = diametr;
	}
	else
	{
		cout << "Информация о колесе еще не была добавлена";
	}
}

int Koleso::koleso_get()
{
	if (diametr >= 0)
	{
		return diametr;
	}
	else
	{
		return -1;
	}
}

void Koleso::koleso_set(double diametr_1)
{
	diametr = diametr_1;
}