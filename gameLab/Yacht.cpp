#include "Yacht.h"

Yacht::Yacht() {
}

bool Yacht::getStatus() {
	for (int i = 0;i < 2;i++)
		if (poz[0] == false)
			return false;
	return true;
}

Yacht::~Yacht() {
}