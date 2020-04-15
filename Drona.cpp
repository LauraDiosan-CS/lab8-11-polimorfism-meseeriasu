#include "Drona.h"

Drona::Drona() {
	unitatiProduse = 0;
	numeProducator = NULL;
	numeModel = NULL;
	numarRotoare = 0;
}

Drona::Drona(const char* numeProducator, const char* numeModel, int unitatiProduse, int numarRotare) {
	this->numeProducator = new char[strlen(numeProducator) + 1];
	strcpy_s(this->numeProducator, strlen(numeProducator) + 1, numeProducator);
	this->numeModel = new char[strlen(numeModel) + 1];
	strcpy_s(this->numeModel, strlen(numeModel) + 1, numeModel);
	this->unitatiProduse = unitatiProduse;
	this->numarRotoare = numarRotare;
}

int Drona::getNumarRoatoare() {
	return numarRotoare;
}

Drona::~Drona() {
}