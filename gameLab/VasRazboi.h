#pragma once
#include "Vapor.h"

class Razboi : public Vapor {
private:
	bool poz[5] = { false };
public:
	Razboi();
	bool getStatus();
	~Razboi();
};
