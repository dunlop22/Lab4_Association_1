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
	cout << "���������� ���������� � ������� ����������\n\n������� ������ ������: ";
	while (scanf("%lf", &shirina) != 1 || shirina < 0)
	{
		printf("������� ������� �������� ������ ������, ���������� ���: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');

	cout << "������� ������ ������: ";
	while (scanf("%lf", &visota) != 1 || visota < 0)
	{
		printf("������� ������� �������� ������ ������, ���������� ���: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');

	cout << "������� ������� ������ � ������: ";
	while (scanf("%lf", &diametr) != 1 || diametr < 0)
	{
		printf("������� ������� �������� �������� ������, ���������� ���: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');

	cout << "������� ��� ��������� ����� (���������/�����/�����): ";
	gets_s(tip_diska);
	while (strlen(tip_diska) == 0)
	{
		printf("������� ������ ��� ��������� �����, ���������� ���: ");
		gets_s(tip_diska);
	}
}

//������� �������� ������
void Koleso::new_koleso(double shirina_1, double visota_1, double diametr_1, char tip_diska_1[20])
{
	strcpy(tip_diska, tip_diska_1);
	shirina = shirina_1;
	visota = visota_1;
	diametr = diametr_1;
}

//������� ������ ���������� � ������
void Koleso::prosmotr_koleso()
{
	if (visota >= 0)
	{
		cout << "\n\n���������� � �������\n������ ������: " << shirina;
		cout << "\n������� ������: " << diametr;
		cout << "\n������ ������: " << visota;
		cout << "\n��� �����: " << tip_diska;
	}
	else
	{
		cout << "���������� � ������ ��� �� ���� ���������";
	}
}

void Koleso::koleso_diamter()
{
	if (visota >= 0)
	{
		double diametr;
		cout << "������� ����� ������� ������: ";
		while (scanf("%lf", &diametr) != 1 || diametr < 0)
		{
			printf("������� ������� �������� ��������, ���������� ���: ");
			while (getchar() != '\n');
		}
		while (getchar() != '\n');
		diametr = diametr;
	}
	else
	{
		cout << "���������� � ������ ��� �� ���� ���������";
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