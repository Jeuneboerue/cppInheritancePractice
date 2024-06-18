#include <iostream>
#include "Hayvan.h"
#include "Kedi.h"

using namespace std;

Kedi::Kedi(string _ad) : Hayvan(_ad) {

}

void Kedi::fareYakala() {
	cout << Hayvan::getIsim() << " fare yakalýyor..\n";
}