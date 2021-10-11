#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <malloc.h>
#include <new>
#include <string>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <io.h>
#include <fcntl.h>
#include <stdlib.h>
#include "Motor.h";
#include "Obchee.h";
#include "Korobka.h";
#include "Koleso.h";
#include "Voditel.h";
#include "Avto.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Motor Motorishe;
	Korobka Korobas;
	Obchee Obchie;
	Koleso Kolesiki;
	Voditel Avd1;
	Avto Avt1;

	Avto::Avto();
	Motor::Motor();
	Obchee::Obchee();
	Korobka::Korobka();
	Voditel::Voditel();
	Koleso::Koleso();
	int menu, podmenu, glmenu, n;
	glmenu = 0;
	n = -1;
	Avto* avtos = new Avto[0];
	do
	{
		podmenu = 0;
		system("cls");
		cout << "1) Общее\n2) Двигатель\n3) Коробка\n4) Колеса\n5) Автомобиль\n6) Водитель\n7) Создание нескольких автомобилей с увеличенным диаметром колес\n\nESC - выход";
		glmenu = _getch();
		if (glmenu == '1')
		{
			do
			{
				system("cls");
				cout << "1) Добавление общей информации\n2) Просмотр общей информации\n3) Изменение названия\n\nESC - Возврат в меню";
				podmenu = _getch();
				if (podmenu == '1')
				{
					do
					{
						system("cls");
						cout << "\n1) Ввод собственных данных об общем\n2) Создание по конструктору";
						menu = _getch();
					} while (menu != '1' && menu != '2');
					system("cls");
					if (menu == '1')
					{
						Obchie.new_obchee_info();
					}
					else
					{
						char name[20] = "Subaru";
						char tip_privoda[20] = "4WD";
						char tip_topliva[20] = "Бензин";
						Obchie.new_obchee(5, 1500, name, 7, tip_privoda, tip_topliva, 65);
					}
				}
				else if (podmenu == '2')
				{
					system("cls");
					Obchie.prosmotr_obchee();
					cout << "\n\nНажмите любую клавишу для возврата в меню";
					_getch();
				}
				else if (podmenu == '3')
				{
					Obchie.obchee_name();
				}
			} while (podmenu != 27);
		}
		else if (glmenu == '2')
		{
			do
			{
				system("cls");
				cout << "1) Добавление информации о двигателе\n2) Просмотр информации о двигателе\n3) Увеличение мощности\n\nESC - Возврат в меню";
				podmenu = _getch();
				if (podmenu == '1')
				{
					do
					{
						system("cls");
						cout << "\n1) Ввод собственных данных о двигателе\n2) Создание по конструктору";
						menu = _getch();
					} while (menu != '1' && menu != '2');
					system("cls");
					if (menu == '1')
					{
						Motorishe.new_motor_info();
					}
					else
					{
						char name[20] = "stok";
						Motorishe.new_motor(100, 10, name, 2, 4, 4);
					}
				}
				else if (podmenu == '2')
				{
					system("cls");
					Motorishe.prosmotr_motor();
					cout << "\n\nНажмите любую клавишу для возврата в меню.";
					_getch();
				}
				else if (podmenu == '3')
				{
					system("cls");
					Motorishe.motor_force();
				}
			} while (podmenu != 27);
		}
		else if (glmenu == '3')
		{
			do
			{
				system("cls");
				cout << "1) Добавление информации о коробке\n2) Просмотр информации о коробке\n3) Изменение количества передач\n\nESC - Возврат в меню";
				podmenu = _getch();
				if (podmenu == '1')
				{
					do
					{
						system("cls");
						cout << "\n1) Ввод собственных данных о коробке\n2) Создание по конструктору";
						menu = _getch();
					} while (menu != '1' && menu != '2');
					system("cls");
					if (menu == '1')
					{
						Korobas.new_korobka_info();
					}
					else
					{
						char tip_korobki[20] = "АКПП";
						Korobas.new_korobka_peredach(5, tip_korobki);
					}
				}
				else if (podmenu == '2')
				{
					system("cls");
					Korobas.prosmotr_korobka_peredach();
					cout << "\n\nНажмите любую клавишу для возврата в меню.";
					_getch();
				}
				else if (podmenu == '3')
				{
					system("cls");
					Korobas.korobka_peredach_peredacha_plus();
					cout << "\n\nНажмите любую клавишу для возврата в основное меню.";
					_getch();
				}
			} while (podmenu != 27);
		}
		else if (glmenu == '4')
		{
			do
			{
				system("cls");
				cout << "1) Добавление информации о колесах\n2) Просмотр информации о колесах\n3) Изменение диаметра колеса\n\nESC - Возврат в меню";
				podmenu = _getch();
				if (podmenu == '1')
				{
					do
					{
						system("cls");
						cout << "\n1) Ввод собственных данных о колесах\n2) Создание по конструктору";
						menu = _getch();
					} while (menu != '1' && menu != '2');
					system("cls");
					if (menu == '1')
					{
						Kolesiki.new_koleso_info();
					}
					else
					{
						char tip_diska[20] = "Литье";
						Kolesiki.new_koleso(230, 55, 17, tip_diska);
					}
				}
				else if (podmenu == '2')
				{
					system("cls");
					Kolesiki.prosmotr_koleso();
					cout << "\n\nНажмите любую клавишу для возврата в меню.";
					_getch();
				}
				else if (podmenu == '3')
				{
					system("cls");
					Kolesiki.koleso_diamter();
					cout << "\n\nНажмите любую клавишу для возврата в основное меню.";
					_getch();
				}
				glmenu = 0;
			} while (podmenu != 27);
		}
		else if (glmenu == '5')
		{
			do
			{
				system("cls");
				cout << "1) Сборка автомобиля из существующих компонентов\n2) Просмотр информации об автомобиле\n3) Привязка/отвязка водителя\n\nESC - выход в меню";
				podmenu = _getch();
				if (podmenu == '1')
				{
					system("cls");
					Avt1.new_avto(Motorishe, Obchie, Korobas, Kolesiki);
					if (Avt1.avto_get() == 1)
					{
						cout << "Автомобиль успешно собран";
					}
					cout << "\n\nНажите любую клавишу для возврата в меню";
					_getch();
				}
				else if (podmenu == '2')
				{
					system("cls");
					Avt1.prosmotr_avto();
					cout << "\n\nНажите любую клавишу для возврата в меню";
					_getch();
				}
				else if (podmenu == '3')
				{
					system("cls");
					do
					{
						system("cls");
						cout << "1) Привязать водителя к автомобилю\n2) Отвязать водителя от автомобиля\n\nESC - выход";
						podmenu = _getch();
						if (podmenu == '1')
						{
							system("cls");
							Avt1.vod_avto(&Avd1);

						}
						else if (podmenu == '2')
						{
							system("cls");
							Avt1.avto_otv();

						}
						cout << "\n\nНажите любую клавишу для возврата в меню";
						_getch();
					} while (podmenu != 27);
				}
				else
				{
					system("cls");
					cout << "Информация о водителе или автомобиле не найдена\n\nНажите любую клавишу для возврата в меню";
					_getch();
				}
			} while (podmenu != 27);
		}
		else if (glmenu == '6')
		{
			do
			{
				system("cls");
				cout << "1) Добавление информации о водителе\n2) Просмотр информации о водителе\n3) Изменение состояния у водителя\n4) Привязка автомобиля к водителю\n5) Отвязка автомобиля от водителя\n\nESC - Возврат в меню";
				podmenu = _getch();
				if (podmenu == '1')
				{
					do
					{
						system("cls");
						cout << "\n1) Ввод собственных данных о водителе\n2) Создание по конструктору";
						menu = _getch();
					} while (menu != '1' && menu != '2');
					system("cls");
					if (menu == '1')
					{
						Avd1.new_voditel_info();
					}
					else
					{
						char name[50] = "Иванов И.И.";
						char pol[20] = "М";
						char covid_19[20] = "Переболел";
						Avd1.new_voditel(25, 2, name, pol, covid_19);
					}
				}
				else if (podmenu == '2')
				{
					system("cls");
					Avd1.prosmotr_voditel();
					cout << "\n\nНажмите любую клавишу для возврата в меню.";
					_getch();
				}
				else if (podmenu == '3')
				{
					system("cls");
					Avd1.voditel_covid();
					cout << "\n\nНажмите любую клавишу для возврата в основное меню.";
					_getch();
				}
				else if (podmenu == '4')
				{
					system("cls");
					if (Avd1.voditel_get() == 1 && Avt1.avto_get() == 1)
					{
						Avd1.voditel_avto_priv(&Obchie);
						cout << "Автомобиль успешно привязан к водителю";
					}
					else
					{
						cout << "Информация об автомобиле или водителе не найдена. Привязка невозможна!";
					}
					cout << "\n\nНажите любую клавишу для возврата в меню";
					_getch();
				}
				else if (podmenu == '5')
				{
					system("cls");
					if (Avd1.voditel_get() == 1 && Avt1.avto_get() == 1)
					{
						Avd1.voditel_avto_otv();
						cout << "Автомобиль успешно отвязан к водителю";
					}
					else
					{
						cout << "Информация об автомобиле или водителе не найдена. отвязка невозможна!";
					}
					cout << "\n\nНажите любую клавишу для возврата в меню";
					_getch();
					
				}

			} while (podmenu != 27);
		}
		else if (glmenu == '7')
		{
			int i = 0;
			double temp, hag;
			system("cls");
			cout << "Введите количество автомобилей для создания: ";
			while (scanf("%d", &n) != 1 || n < 0)
			{
				printf("Неверно введено количество, попробуйте еще: ");
				while (getchar() != '\n');
			}
			while (getchar() != '\n');

			cout << "Введите шаг увеличения диаметра колеса: ";
			while (scanf("%lf", &hag) != 1 || hag < 0)
			{
				printf("Неверно введено количество, попробуйте еще: ");
				while (getchar() != '\n');
			}
			while (getchar() != '\n');

			Avto* avtos = new Avto[n];
			temp = Kolesiki.koleso_get();
			avtos[0].new_avto(Motorishe, Obchie, Korobas, Kolesiki);
			if (avtos[0].avto_get() == 1)
			{

				Kolesiki.koleso_set(temp + (i + 1) * hag);
				for (i = 1; i < n; i++)
				{

					avtos[i].new_avto(Motorishe, Obchie, Korobas, Kolesiki);
					Kolesiki.koleso_set(temp + (i + 1) * hag);
				}
				Kolesiki.koleso_set(temp);
				system("cls");
				for (i = 0; i < n; i++)
				{
					cout << "\n\nАВТО №" << i + 1 << "\n";
					avtos[i].prosmotr_avto();
				}
			}
			else
			{
				system("cls");
				cout << "Автомобиль не может быть собран из-за отсутствия даных о каком-либо из агрегатов";
				n = -1;
			}
			delete[] avtos;
			cout << "\n\nНажите любую клавишу для возврата в меню";
			_getch();
		}
	} while (glmenu != 27);
}