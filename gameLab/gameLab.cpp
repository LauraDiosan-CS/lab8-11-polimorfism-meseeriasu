#include <iostream>
#include "Vapor.h"
#include "Repository.h"
#include "Service.h"
#include "UI.h"

using namespace std;

int main()
{
	Repository<Vapor*>* repo;
	repo = new Repository<Vapor*>;
	Service service(repo);
	UI ui(service);
	ui.showMenu();
}
