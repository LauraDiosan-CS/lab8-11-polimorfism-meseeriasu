#pragma once
#include "Vapor.h"

class Submarine : public Vapor {
private:
	bool poz[2] = { false };
public:
	Submarine();
	bool getStatus();
	~Submarine();
};