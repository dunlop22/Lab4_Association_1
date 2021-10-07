#define _CRT_SECURE_NO_WARNINGS
#include "Korobka.h"
#include <iostream>
#include <conio.h>
using namespace std;

Korobka::Korobka()
{
	kolvo_peredach = -1;
	tip_korobki[0] = '\0';
}

void Korobka::new_korobka_info()
{
	system("cls");
	cout << "���������� ���������� � ������� ������� ����������\n\n������� ��� ������� ������� (����/����): ";
	gets_s(tip_korobki);
	while (strlen(tip_korobki) == 0)
	{
		printf("������� ������� ������ ����������, ���������� ���: ");
		gets_s(tip_korobki);
	}

	cout << "������� ���������� ������� �������: ";
	while (scanf("%lf", &kolvo_peredach) != 1 || kolvo_peredach < 0)
	{
		printf("������� ������� �������� ���������� �������, ���������� ���: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');
}

void Korobka::new_korobka_peredach(double kolvo_peredach_1, char tip_korobki_1[20])
{
	strcpy(tip_korobki, tip_korobki_1);
	kolvo_peredach = kolvo_peredach_1;
}

void Korobka::prosmotr_korobka_peredach()
{
	if (kolvo_peredach >= 0)
	{
		cout << "\n\n���������� � ������� ������������ �������\n��� ������� ������������ �������: " << tip_korobki;
		cout << "\n���������� ������� �������: " << kolvo_peredach;
	}
	else
	{
		cout << "���������� � �������� ������� �����������";
	}
}

void Korobka::korobka_peredach_peredacha_plus()
{
	if (kolvo_peredach >= 0)
	{
		double peredach;
		cout << "������� ���������� �������������� ������� (���-�� ����� ���� �������������): ";
		while (scanf("%lf", &peredach) != 1 || kolvo_peredach + peredach < 0)
		{
			printf("������� ������� �������� ���������� �������, ���������� ���: ");
			while (getchar() != '\n');
		}
		while (getchar() != '\n');
		kolvo_peredach = kolvo_peredach + peredach;
	}
	else
	{
		cout << "���������� � �������� ������� �����������";
	}
}

int Korobka::korobka_get()
{
	if (kolvo_peredach >= 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}



}