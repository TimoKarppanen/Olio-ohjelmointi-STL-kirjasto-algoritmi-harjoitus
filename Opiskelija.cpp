#include "Opiskelija.h"
#include <vector>


Opiskelija::Opiskelija() {			// oletuskonstruktorin toteutus

}


// Tee luokalle parametrillinen konstruktori ** SUORITETTU **

Opiskelija::Opiskelija(string n, int i, int o) : nimi(n), id(i), opintopisteet(o) {


}

// Tee metodi (get-metodi), joka palauttaa opintopisteet-attribuutin arvon

int Opiskelija::get() {			// Get metodin toteutus

	return opintopisteet;		// Palauttaa opintopisteet atribuutin arvon
}


void Opiskelija::print() {

	cout << "Nimi: " << nimi << " ID: " << id << " " << "Opintopisteet: " << opintopisteet << endl;
}


void Opiskelija::printOpintopisteet() {

	cout << opintopisteet << endl;
}



/* Operaattorin "<<" kuormituksen toteutus */

ostream& operator<<(ostream& os, const Opiskelija& v)
{	

	os << "Nimi: " << v.nimi << " ID " << v.id << " Opintopisteet " << v.opintopisteet << endl;
	return os;

}


Opiskelija::~Opiskelija() {			// destruktorin toteutus

}