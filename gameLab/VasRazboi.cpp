#include "VasRazboi.h"

Razboi::Razboi() {
}

bool Razboi::getStatus() {
	for (int i = 0;i < 4;i++)
		if (poz[0] == false)
			return false;
	return true;
}

Razboi::~Razboi(){
}