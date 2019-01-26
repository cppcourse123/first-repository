
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Auto {
	static int id;
public: 
	string marka;
	string model;
	int v_max;
	double cena;
private:
	string wyposazenie;
public:
	Auto(string marka, string model, int v_max, double cena) {
		this->marka = marka;
		this->model = model;
		this->v_max = v_max;
		this->cena = cena;
		this->wyposazenie = "standard";
		id++;
		cout << id << endl;
	}
	~Auto() {
		cout << "Koniec" << endl;
	}
	void zmienWyposazenie(string wyposazenie) {
		this->wyposazenie = wyposazenie;
	}
	void zmienCene(double cena) {
		this->cena = cena;
	}
	void pokazAuto() {
		cout <<	"Marka: " << marka << "\nModel: " << model << 
				"\nVmax: " << v_max << "\nCena:" << cena << 
				"\nWyposazenie: " << wyposazenie << endl;
	}
};

int main()
{
	Auto a1("VW","Passat", 240, 250000);
	Auto a2("Audi", "A4", 280, 350000);
	Auto a3("BMW", "X5", 260, 550000);
	a1.pokazAuto();
	a2.pokazAuto();
	a3.pokazAuto();
	//a1.wyposazenie = "premium";
	a1.zmienWyposazenie("permium");
	a1.pokazAuto();


//	Auto a1;
//	cout << "Modyfikacja pol klasowych" << endl;
//	a1.marka = "BMW"; a1.model = "X3"; a1.v_max = 260; a1.cena = 350000;
//	a1.pokazAuto();
//	a1.zmienCene(380000);
//	a1.pokazAuto();
}

