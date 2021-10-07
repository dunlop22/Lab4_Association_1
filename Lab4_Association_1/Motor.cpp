#define _CRT_SECURE_NO_WARNINGS
#include "Motor.h"
#include <iostream>
#include <conio.h>
using namespace std;

Motor::Motor()
{
	koni = -1;
	name[0] = '\0';
	rab_obem = -1;
	rasxod = -1;
	kol_vo_cilindr = -1;
	klapan = -1;
}


void Motor::new_motor_info()
{
	cout << "������� ���������� ���������: ";
	gets_s(name);
	while (strlen(name) == 0)
	{
		printf("������� ������� ���������� ���������, ���������� ���: ");
		gets_s(name);
	}
	cout << "������� ������� ����� ��������� � ������: ";
	while (scanf("%lf", &rab_obem) != 1 || rab_obem < 0)
	{
		printf("������� ������� �������� ������ ���������, ���������� ���: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');

	cout << "������� ���������� ���������� ���: ";
	while (scanf("%lf", &koni) != 1 || koni < 0)
	{
		printf("������� ������� �������� ���������� ��������� ���, ���������� ���: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');

	cout << "������� ������� ������ ������� �� 100�� � ������: ";
	while (scanf("%lf", &rasxod) != 1 || rasxod < 0)
	{
		printf("������� ������� �������� ������� �� 100��, ���������� ���: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');

	cout << "������� ���������� ���������: ";
	while (scanf("%lf", &kol_vo_cilindr) != 1 || kol_vo_cilindr < 0)
	{
		printf("������� ������� �������� ���������� ���������, ���������� ���: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');

	cout << "������� ���������� �������� �� ���� �������: ";
	while (scanf("%lf", &klapan) != 1 || klapan < 0)
	{
		printf("������� ������� �������� ���������� ��������, ���������� ���: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');
}

void Motor::new_motor(double koni_1, double rasxod_1, char name_1[20], double rab_obem_1, double kol_vo_cilindr_1, double klapan_1)
{
	strcpy(name, name_1);
	rab_obem = rab_obem_1;
	koni = koni_1;
	rasxod = rasxod_1;
	kol_vo_cilindr = kol_vo_cilindr_1;
	klapan = klapan_1;
}

void Motor::prosmotr_motor()
{
	if (koni >= 0)
	{
		cout << "\n\n��������� � ���������:\n���������� ���������: " << name;
		cout << "\n������� �����: " << rab_obem;
		cout << "\n�������� (�.�.): " << koni;
		cout << "\n������� ������ �� 100��: " << rasxod;
		cout << "\n���������� ���������: " << kol_vo_cilindr;
		cout << "\n���������� �������� �� 1 �������: " << klapan;
	}
	else
	{
		cout << "���������� � ��������� �����������";
	}
}

void Motor::motor_force()
{
	if (koni >= 0)
	{
		system("cls");
		double force;
		cout << "������� ���������� �������������� ��� (���-�� ����� ���� �������������): ";
		while (scanf("%lf", &force) != 1 || force + koni < 0)
		{
			printf("������� ������� �������� ���������� ��������� ���, ���������� ���: ");
			while (getchar() != '\n');
		}
		while (getchar() != '\n');
		koni = koni + force;
	}
	else
	{
		cout << "�� ������ ��������� ��� ���������� ���.\n\n������� ����� ������� ��� �������� � �������� ����.";
		_getch();
	}
}

int Motor::motor_get()
{
	if (koni >= 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}