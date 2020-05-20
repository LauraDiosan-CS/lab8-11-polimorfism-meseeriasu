#pragma once
#include "Service.h"

class UI {
private:
	Service service;
public:
	UI();
	UI(Service);
	void showMenu();
	~UI();
};