#include <iostream>
#include <sstream>
#include <vector>

#include "Coffeemachine.h"
#include "Heating.h"
#include "Radio.h"
using namespace std;


int main() {

	GeneralDevice* actualDevice = nullptr;
	vector<GeneralDevice*> devices;
	devices.push_back(new Coffeemachine("1 Tchibo KM 3"));
	devices.push_back(new Radio("2 Sony im Wohnzimmer"));
	devices.push_back(new Radio("3 Grundig in der Kueche"));
	devices.push_back(new Heating("4 Heizung im Obergeschoss"));
	devices.push_back(new Heating("5 Heizung im Erdgeschoss"));
	
	stringstream ss;
	for (int i = 0; i <5; i++) {
		ss << "Konstruktor GeneralDevice von " <<devices[i]->getDeviceName() << endl;
		ss << "Konstuktor " << devices[i]->getClass() << endl;
	}
	cout << ss.str();

	char choice;
	bool loop{1};
	cout << "\nEingabe von 1, 2, 3, 4, 5, +, -, ? oder 0: ";
	cin >> choice;

	while (loop) {
		switch (choice) {
		case '0':
			for (auto dev : devices) {
				//actualDevice = dev;
				cout << dev->toString() << " wird ausgeschaltet" << endl;
			}
			loop = false;
			break;

		case '1':
			cout << devices[0]->toString() << endl;
			actualDevice = devices[0];
			break;

		case '2':
			cout << devices[1]->toString() << endl;
			actualDevice = devices[1];
			break;

		case '3':
			cout << devices[2]->toString() << endl;
			actualDevice = devices[2];
			break;

		case '4':
			cout << devices[3]->toString() << endl;
			actualDevice = devices[3];
			break;

		case '5':
			cout << devices[4]->toString() << endl;
			actualDevice = devices[4];
			break;

		case '+':
			if (actualDevice != nullptr) {
				++(*actualDevice); //nicht actualDevice->Operator++()
				cout << actualDevice->toString() << endl;
			}
			else {
				cout << "Kein Geraet gefunden" << endl;
			}

			break;

		case '-':
			if (actualDevice != nullptr) {
				--(*actualDevice); 
				cout << actualDevice->toString() << endl;
			}
			else {
				cout << "Kein Geraet gefunden" << endl;
			}
			break;

		case '?':
			for (auto dev :devices) {
				//actualDevice = dev;
				cout << dev->toString() << endl;
			}
			break;

		default:
			cout << "Flasche Eingabe! Geben Sie nochmal ein: " << endl;
			break;
		}

		if (choice != '0') {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Weitere Taste: ";
			cin >> choice;
		}

	}

	for (auto dev : devices) {
		delete dev;
	}

	return 0;
}
