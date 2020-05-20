#include "Submarine.h"

Submarine::Submarine() {
}

bool Submarine::getStatus() {
	for (int i = 0;i < 2;i++)
		if (poz[0] == false)
			return false;
	return true;
}

Submarine::~Submarine() {
}