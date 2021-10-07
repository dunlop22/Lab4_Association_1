#include "Avto.h";
#include <iostream>
using namespace std;

Avto::Avto()
{
}


void Avto::new_avto(Motor har2_1, Obchee har1_1, Korobka har4_1, Koleso har3_1)
{
    if (har2_1.motor_get() == 1 && har1_1.obchee_get() == 1 && har3_1.koleso_get() >= 0 && har4_1.korobka_get() == 1)
    {
        har1 = har1_1;
        har2 = har2_1;
        har3 = har3_1;
        har4 = har4_1;
    }
    else
    {
        cout << "Сборка невозможна. Не вся информация об агрегатах добавлена";
    }
}



//функция привязки водителя к автомобилю через асссоциацию
void Avto::vod_avto(Voditel *vod_1)
{
    if (Avto::har1.obchee_get() == 1 && (*vod_1).voditel_get() == 1)
    {
        vod = *vod_1;   
    }
    else
    {
        cout << "Информация об автомобиле или водителе не найдена";
    }

}

void Avto::prosmotr_avto()
{
    if (Avto::har1.obchee_get() == 1)
    {
        Avto::har1.prosmotr_obchee();
        Avto::har2.prosmotr_motor();
        Avto::har3.prosmotr_koleso();
        Avto::har4.prosmotr_korobka_peredach();
        if (Avto::vod.voditel_get() == 1)
        {
            Avto::vod.prosmotr_voditel();
        }
    }
    else
    {
        cout << "Информация об автомобиле не найдена";
    }
}


void Avto::avto_otv()
{
    if (Avto::har1.obchee_get() == 1)
    {
        Avto::vod.Voditel::Voditel();
        cout << "Водитель успешно отвязан от автомобиля";
    }
    else
    {
        cout << "Информация об автомобиле не найдена";
    }
    
}

int Avto::avto_get()
{
    if (Avto::har2.motor_get() == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}