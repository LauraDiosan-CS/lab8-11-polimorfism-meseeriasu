#include "UI.h"
#include <iostream>

using namespace std;

UI::UI() {
}

UI::UI(Service ser) {
	service = ser;
}

void UI::showMenu() {
	int m, n, k, p ,q;
	cout << "Dati m si n: ";
	cin >> m;
	cin >> n;
	service.setMatrice(m, n);
	cout << " Nr. vase de razboi: "; cin >> k;
	cout << "Nr. yacht-uri: ";	cin >> p;
	cout << "Nr. submarine: ";	cin >> q;
	for (int i = 1;i <= k;i++)
	{
		int k, l, z, x;
		cout << "Vasul de razboi " << i << ": ";	cin >> k >> l >> z >> x;
		service.addRazboi(k, l, z, x);
	}
	for (int i = 1;i <= p;i++)
	{
		int k, l, z, x;
		cout << "Yacht-ul " << i << ": ";	cin >> k >> l >> z >> x;
		service.addYacht(k, l, z, x);
	}
	for (int i = 1;i <= q;i++)
	{
		int k, l, z, x;
		cout << "Submarinul " << i << ": ";	cin >> k >> l >> z >> x;
		service.addSubmarine(k, l, z, x);
	}
	for (int i = 1;i <= m;i++)
	{
		for (int j = 1;j <= n;j++)
			if (service.getStatus(i, j))
				cout << "| " << "X ";
			else
				cout << "| " << "O ";
		cout << endl;
	}

}

UI::~UI() {
}