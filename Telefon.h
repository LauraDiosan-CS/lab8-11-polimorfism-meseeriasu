#pragma once
#include "Comanda.h"
#include <string>
#include <vector>

using namespace std;

class Telefon : public Comanda {
	private:
		vector<string> listaOperatoriGSMCompatibili;
	public:
		Telefon();
		Telefon(const char*,const char*, int, vector<string>);
		~Telefon();
};