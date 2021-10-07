#pragma once
class Koleso
{
	double shirina;
	double visota;
	double diametr;
	char tip_diska[20];
public:
	Koleso();
	void koleso_diamter();
	void prosmotr_koleso();
	void new_koleso(double shirina_1, double visota_1, double diametr_1, char tip_diska_1[20]);
	void new_koleso_info();
	int koleso_get();
	void koleso_set(double diametr_1);
};

