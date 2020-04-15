#include "Telefon.h"
#include <string>

Telefon::Telefon() {
	unitatiProduse = 0;
	numeProducator = NULL;
	numeModel = NULL;
}

Telefon::Telefon(const char* numeProducator,const char* numeModel, int unitatiProduse, vector<string> listaOperatoriGSMCOmpatibili) {
	this->numeProducator = new char[strlen(numeProducator) + 1];
	strcpy_s(this->numeProducator, strlen(numeProducator) + 1, numeProducator);
	this->numeModel = new char[strlen(numeModel) + 1];
	strcpy_s(this->numeModel, strlen(numeModel) + 1, numeModel);
	this->unitatiProduse = unitatiProduse;
	this->listaOperatoriGSMCompatibili.swap(listaOperatoriGSMCOmpatibili);
}

Telefon::~Telefon() {
}
