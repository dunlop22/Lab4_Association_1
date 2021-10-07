#pragma once
class Motor
{
	char name[20];
	double rab_obem;
	double koni;
	double rasxod;
	double kol_vo_cilindr;
	double klapan;
public:
	Motor();
	void new_motor_info();
	void new_motor(double koni_1, double rasxod_1, char name_1[20], double rab_obem_1, double kol_vo_cilindr_1, double klapan_1);
	void prosmotr_motor();
	void motor_force();
	int motor_get();
};

