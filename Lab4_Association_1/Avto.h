#pragma once
#include "Motor.h";
#include "Obchee.h";
#include "Korobka.h";
#include "Koleso.h";
#include "Voditel.h";

class Avto
{
	Obchee har1;
	Motor har2;
	Koleso har3;
	Korobka har4;
	Voditel vod;
public:
	Avto();
	void new_avto(Motor har2_1, Obchee har1_1, Korobka har4_1, Koleso har3_1);
	void vod_avto(Voditel *vod_1);
	void prosmotr_avto();
	void avto_otv();
	int avto_get();
	~Avto() {};
};



