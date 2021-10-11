#pragma once

#include "Obchee.h";
class Voditel
{
    char name[20];
    double age;
    double stag;
    char pol[20];
    char covid_19[20];
    char name_avto[20];
    Obchee obchie;
public:
    Voditel();
    void new_voditel(double age_1, double stag_1, char name_1[20], char pol_1[20], char covid_19_1[20]);
    void new_voditel_info();
    void prosmotr_voditel();
    void voditel_covid();
    int voditel_get();
    void voditel_avto_priv(Obchee* obchie);
    void voditel_avto_otv();
};

