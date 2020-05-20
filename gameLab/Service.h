#pragma once
#include "Repository.h"
#include "VasRazboi.h"
#include "Submarine.h"
#include "Yacht.h"

class Service {
private:
	Repository<Vapor*>* repo;
	int linii, coloane;
	bool matrice[32][32] = { false };
public:
	Service();
	Service(Repository<Vapor*>*);
	void setMatrice(int, int);
	void addRazboi(int, int, int, int);
	void addSubmarine(int, int, int, int);
	bool getStatus(int, int);
	void addYacht(int, int, int, int);
	~Service();
};
