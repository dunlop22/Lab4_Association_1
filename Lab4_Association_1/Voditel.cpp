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
	cout << "������� ��� �������� : ";
	gets_s(name);
	while (strlen(name) == 0)
	{
		printf("������� ������ ��� ��������, ���������� ���: ");
		gets_s(name);
	}
	cout << "������� �������: ";
	while (scanf("%lf", &age) != 1 || age < 0)
	{
		printf("������� ������ ������� ��������, ���������� ���: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');
	cout << "������� ��� �������� (�/�): ";
	gets_s(pol);
	while (strlen(pol) == 0)
	{
		printf("������� ������ ��� ��������, ���������� ���: ");
		gets_s(pol);
	}
	cout << "������� ������ Covid-19 (���������/������/����������): ";
	gets_s(covid_19);
	while (strlen(covid_19) == 0)
	{
		printf("������� ������ ������ COVID-19, ���������� ���: ");
		gets_s(covid_19);
	}
	cout << "������� ���� ��������: ";
	while (scanf("%lf", &stag) != 1 || stag < 0)
	{
		printf("������� ������ ���� ��������, ���������� ���: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');
}

void Voditel::prosmotr_voditel()
{
	if (age >= 0)
	{
		cout << "\n\n���������� � ��������";
		cout << "\n���: " << name;
		cout << "\n�������: " << age;
		cout << "\n���: " << pol;
		cout << "\n������ Covid-19: " << covid_19;
		cout << "\n����: " << stag << "\n***************************************\n\n";
	}
	else
	{
		cout << "���������� � �������� �����������";
	}
}

void Voditel::voditel_covid()
{
	if (age >= 0)
	{
		cout << "������� ����� ��������� Covid-19 � ��������: ";
		gets_s(covid_19);
		while (strlen(covid_19) == 0)
		{
			printf("������� ������� ���������, ���������� ���: ");
			gets_s(covid_19);
		}
	}
	else
	{
		cout << "���������� � �������� �����������";
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