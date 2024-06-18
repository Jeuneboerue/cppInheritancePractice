#include <iostream>
#include "Hayvan.h"
#include "Kopek.h"

using namespace std;

int Kopek::kopekSayisi = 0;

Kopek::Kopek(string _ad) : Hayvan(_ad) {
	kopekSayisi++;
}

void Kopek::havla() {
	cout << Hayvan::getIsim() << " havlýyor.." << endl;
}