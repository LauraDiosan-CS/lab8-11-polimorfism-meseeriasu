#include "Service.h"
using namespace std;

Service::Service() {
}

Service::Service(Repository<Vapor*>* repository) {
	repo = repository;
	linii = 0;
	coloane = 0;
}

void Service::setMatrice(int n, int m) {
	linii = n;
	coloane = m;
}

void Service::addRazboi(int k, int l, int z, int x) {
	for (int i = k;i <= z;i++)
		for (int j = l;j <= x;j++)
			matrice[i][j] = true;
	Vapor* vap = new Razboi;
	repo->add(vap);
}

void Service::addSubmarine(int k, int l, int z, int x) {
	for (int i = k;i <= z;i++)
		for (int j = l;j <= x;j++)
			matrice[i][j] = true;
	Vapor* vap = new Submarine;
	repo->add(vap);
}

void Service::addYacht(int k, int l, int z, int x) {
	for (int i = k;i <= z;i++)
		for (int j = l;j <= x;j++)
			matrice[i][j] = true;
	Vapor* vap = new Yacht;
	repo->add(vap);
}

bool Service::getStatus(int k, int l) {
	return matrice[k][l];
}

Service::~Service() {
}