#define _CRT_SECURE_NO_WARNINGS
#include "Voditel.h"
#include <iostream>
using namespace std;

Voditel::Voditel()
{
	age = -1;
	stag = -1;
	name[0] = '\0';
	pol[0] = '\0';
	covid_19[0] = '\0';
}

void Voditel::new_voditel(double age_1, double stag_1, char name_1[20], char pol_1[20], char covid_19_1[20])
{
	stag = stag_1;
	age = age_1;
	strcpy(name, name_1);
	strcpy(pol, pol_1);
	strcpy(covid_19, covid_19_1);
}

void Voditel::new_voditel_info()
{
	cout << "Введите ФИО водителя : ";
	gets_s(name);
	while (strlen(name) == 0)
	{
		printf("Неверно введен ФИО водителя, попробуйте еще: ");
		gets_s(name);
	}
	cout << "Введите возраст: ";
	while (scanf("%lf", &age) != 1 || age < 0)
	{
		printf("Неверно введен возраст водителя, попробуйте еще: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');
	cout << "Введите пол водителя (М/Ж): ";
	gets_s(pol);
	while (strlen(pol) == 0)
	{
		printf("Неверно введен пол водителя, попробуйте еще: ");
		gets_s(pol);
	}
	cout << "Введите статус Covid-19 (переболел/привит/неизвестно): ";
	gets_s(covid_19);
	while (strlen(covid_19) == 0)
	{
		printf("Неверно введен статус COVID-19, попробуйте еще: ");
		gets_s(covid_19);
	}
	cout << "Введите стаж водителя: ";
	while (scanf("%lf", &stag) != 1 || stag < 0)
	{
		printf("Неверно введен стаж водителя, попробуйте еще: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');
}

void Voditel::prosmotr_voditel()
{
	if (age >= 0)
	{
		cout << "\n\nИНФОРМАЦИЯ О ВОДИТЕЛЕ";
		cout << "\nФИО: " << name;
		cout << "\nВозраст: " << age;
		cout << "\nПол: " << pol;
		cout << "\nСтатус Covid-19: " << covid_19;
		cout << "\nСтаж: " << stag << "\n***************************************\n\n";
	}
	else
	{
		cout << "Информация о водителе отсутствует";
	}
}

void Voditel::voditel_covid()
{
	if (age >= 0)
	{
		cout << "Введите новое состояние Covid-19 у водителя: ";
		gets_s(covid_19);
		while (strlen(covid_19) == 0)
		{
			printf("Неверно введено состояние, попробуйте еще: ");
			gets_s(covid_19);
		}
	}
	else
	{
		cout << "Информация о водителе отсутствует";
	}
}

int Voditel::voditel_get()
{
	if (age >= 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}