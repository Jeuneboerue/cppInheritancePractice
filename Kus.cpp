#include <iostream>
#include "Hayvan.h"
#include "Kus.h"

using namespace std;

Kus::Kus(string _ad) : Hayvan(_ad) {

}

void Kus::uc() {
	cout << Hayvan::getIsim() << " uçuyor.." << endl;
}