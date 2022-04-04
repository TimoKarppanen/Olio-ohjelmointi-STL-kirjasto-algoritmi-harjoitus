#ifndef OPISKELIJA_H
#define OPISKELIJA_H

#include <iostream>
#include <string>

using namespace std;

class Opiskelija {

public:

	Opiskelija();	// oletuskonstruktorin prototyypitys

	// Tee luokalle parametrillinen konstruktori ** SUORITETTU **

	Opiskelija(string n, int i, int o); // Parametrillisen konstruktorin prototyypitys


	/* Tee metodi (get-metodi), joka palauttaa opintopisteet-attribuutin arvon */

	int get();		// get metodin prototyypitys


	~Opiskelija();		// oletus destruktorin prototyypitys

	/*  Ylikuormitetaan "<<" operaattori */

	friend ostream& operator << (ostream& os, const Opiskelija& v);

	void print();

	void printOpintopisteet();

	// private poistettu

	// atribuutit nimi, id (int) ja opintopisteet **SUORITETTU**

	string nimi;			// määritettiin stringiksi koska nimet annetaan tekstimuodossa
	int id;
	int opintopisteet;
	
};
















#endif
