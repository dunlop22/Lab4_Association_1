#define _CRT_SECURE_NO_WARNINGS
#include "Obchee.h"
#include <iostream>
#include <conio.h>
using namespace std;

Obchee::Obchee()
{
	name[0] = '\0';
	tip_privoda[0] = '\0';
	tip_topliva[0] = '\0';
	kolvo_mest = -1;
	razgon_do_100 = -1;
	massa = -1;
	obem_benzobaka = -1;
}

void Obchee::new_obchee_info()
{
	cout << "Добавление общей информации об автомобиле\n\nВведите модель автомобиля: ";
	gets_s(name);
	while (strlen(name) == 0)
	{
		printf("Неверно введена модель автомобиля, попробуйте еще: ");
		gets_s(name);
	}

	cout << "Введите тип привода (2WD/4WD): ";
	gets_s(tip_privoda);
	while (strlen(tip_privoda) == 0)
	{
		printf("Неверно введен тип привода, попробуйте еще: ");
		gets_s(tip_privoda);
	}

	cout << "Введите тип топлива (бензин/дизель/электро): ";
	gets_s(tip_topliva);
	while (strlen(tip_topliva) == 0)
	{
		printf("Неверно введен тип топлива, попробуйте еще: ");
		gets_s(tip_topliva);
	}

	cout << "Введите количество посадочных мест: ";
	while (scanf("%lf", &kolvo_mest) != 1 || kolvo_mest < 0)
	{
		printf("Неверно введенно значение количества посадочных мест, попробуйте еще: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');

	cout << "Введите время разгона до 100км/ч: ";
	while (scanf("%lf", &razgon_do_100) != 1 || razgon_do_100 < 0)
	{
		printf("Неверно введенно значение разгона до 100км/ч, попробуйте еще: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');

	cout << "Введите массу автомобиля: ";
	while (scanf("%lf", &massa) != 1 || massa < 0)
	{
		printf("Неверно введенно значение массы, попробуйте еще: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');

	cout << "Введите объем бензобака в литрах: ";
	while (scanf("%lf", &obem_benzobaka) != 1 || obem_benzobaka < 0)
	{
		printf("Неверно введенно значение объема бензобака, попробуйте еще: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');
}

void Obchee::new_obchee(double kolvo_mest_1, double massa_1, char name_1[20], double razgon_do_100_1, char tip_privoda_1[20], char tip_topliva_1[20], double obem_benzobaka_1)
{
	strcpy(name, name_1);
	strcpy(tip_privoda, tip_privoda_1);
	strcpy(tip_topliva, tip_topliva_1);
	massa = massa_1;
	obem_benzobaka = obem_benzobaka_1;
	razgon_do_100 = razgon_do_100_1;
	kolvo_mest = kolvo_mest_1;
}

void Obchee::prosmotr_obchee()
{
	if (obem_benzobaka >= 0)
	{
		cout << "\n\nОБЩАЯ ИНФОРМАЦИЯ:\nМодель: " << name;
		cout << "\nТип привода: " << tip_privoda;
		cout << "\nТип топлива: " << tip_topliva;
		cout << "\nКоличество посадочных мест: " << kolvo_mest;
		cout << "\nВремя разгона до 100км/ч: " << razgon_do_100;
		cout << "\nОбъем бензобака: " << obem_benzobaka;
		cout << "\nМасса: " << massa;
	}
	else
	{
		cout << "Общая информация отсутствует";
	}

}

void Obchee::obchee_name()
{
	if (obem_benzobaka >= 0)
	{
		system("cls");
		cout << "Введите новое название модели: ";
		gets_s(name);
		while (strlen(name) == 0)
		{
			printf("Неверно введена модель автомобиля, попробуйте еще: ");
			gets_s(name);
		}
	}
	else
	{
		cout << "Общая информация не найдена.\n\nНажмите любую клавишу для возврата в основное меню.";
		_getch();
	}
}

int Obchee::obchee_get()
{
	if (massa >= 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}