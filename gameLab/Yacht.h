#pragma once
#include "Vapor.h"

class Yacht : public Vapor {
private:
	bool poz[3] = { false };
public:
	Yacht();
	bool getStatus();
	~Yacht();
};
