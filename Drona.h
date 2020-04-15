#pragma once
#include "Comanda.h"

class Drona : public Comanda {
	private:
		int numarRotoare;
	public:
		Drona();
		Drona(const char*, const char*, int, int);
		int getNumarRoatoare();
		~Drona();
};