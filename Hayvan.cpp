#include <iostream>
#include "Hayvan.h"

using namespace std;

Hayvan::Hayvan(string _isim) {
	isim = _isim;
}

void Hayvan::beslen() {
	cout << Hayvan::isim << " besleniyor..." << endl;
}

void Hayvan::uyu() {
	cout << Hayvan::isim << " uyuyor..." << endl;
}

void Hayvan::setIsim(string _isim) {
	isim = _isim;
}

string Hayvan::getIsim() {
	return isim;
}