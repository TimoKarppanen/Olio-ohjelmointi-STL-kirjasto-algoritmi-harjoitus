/* Tee VisualStudiolla uusi projekti.
Tee projektiin luokka Opiskelija sek� p��ohjelma seuraavien ohjeiden mukaisesti.
Palauta kaikki kooditiedostot palautuslaatikkoon. */

/*  Luo viisi Opiskelija-oliota, keksi itse olioiden attribuutit */

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "Opiskelija.h"
#include <cstring>

using namespace std;

int main() {

	setlocale(LC_ALL, "fi-FI");

	vector<Opiskelija*> opiskelijat;			// Luodaan s�ili� olioille
										
	Opiskelija* opiskelija1 = new Opiskelija("Aleksi", 5 , 200);			
	Opiskelija* opiskelija2 = new Opiskelija("Juha", 6 , 188);
	Opiskelija* opiskelija3 = new Opiskelija("Aino", 7 , 240);
	Opiskelija* opiskelija4 = new Opiskelija("Leevi", 8 , 100);
	Opiskelija* opiskelija5 = new Opiskelija("Sami", 9 , 175);

	// Pusketaan oliot vector-s�ili��n

	opiskelijat.push_back(opiskelija1);									
	opiskelijat.push_back(opiskelija3);
	opiskelijat.push_back(opiskelija4);
	opiskelijat.push_back(opiskelija5);
	
	vector<Opiskelija*>::iterator it;		

	/* K�yd��n vektorin sis�lt� iteraattorin avulla l�pi alusta loppuun.*/


	cout << " K�yd��n vektorin sis�lt� l�pi " << endl;

	for (it = opiskelijat.begin(); it != opiskelijat.end(); it++) {
		cout << (**it) << endl;											
	}

	// tulostetaan opiskelijoiden tiedot << ylikuormituksen avulla.


	// Laske yhteen kaikkien opiskelijoiden suorittamat opintopisteet k�ytt�m�ll�
	// std::for_each -algoritmia JA lambda-funktiota

	cout << " Tulostetaan opiskelijoiden opintopisteet " << endl;

	for_each(opiskelijat.begin(), opiskelijat.end(), [](Opiskelija* v) {	

		cout << v->opintopisteet << endl;

		});		

	// Suoritetaan jokaiselle alkion elementille opintopisteiden tulostus

	char input[100];			// luodaan char muuttuja nimelt� input (100-kirjain paikkanen)

	strcpy_s(input, "Binaaritiedosto Opintopisteille");			// laitetaan teksti input muuttujan sis�lle.

	fstream file("Binaaritiedosto.bin", ios::binary | ios::in | ios::out | ios::trunc);

	if (!file.is_open()) {

		cout << "virhe tiedostoa avatessa";
	}

	else {

		int lenght = strlen(input);

		for (int counter = 0; counter <= lenght; counter++) {

			file.put(input[counter]);
		}

		file.seekg(0);

		char ch;

		while (file.good()) {

			file.get(ch);
			cout << ch;
		}
	}


	return 0;
}