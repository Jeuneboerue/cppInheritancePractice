#include <iostream>
#include "Hayvan.h"
#include "Kedi.h"
#include "Kopek.h"
#include "Kus.h"

using namespace std;



int main() {
	setlocale(LC_ALL, "Turkish");

	Hayvan h1("Karabaþ");

	h1.beslen();
	h1.uyu();

	cout << endl;

	Kedi k1("Tekir");
	k1.beslen();
	k1.uyu();
	k1.fareYakala();

	cout << endl;

	Hayvan* p = new Hayvan("Mutlu");

	p->beslen();
	p->uyu();

	cout << endl;

	Hayvan* a = new Hayvan("Duman");

	a->beslen();
	a->uyu();

	a->setIsim("Arwen");
	cout << a->getIsim() << endl << endl;

	cout << endl;

	Kopek* b = new Kopek("Aslan");
	b->beslen();
	b->havla();

	cout << endl;

	Kus* c = new Kus("Çayýr");
	c->beslen();
	c->uc();

	cout << endl;

	cout << "Köpek sayýsý: " << Kopek::getKopekSayisi() << endl;

	delete p;
	delete a;
	delete b;
	delete c;

	system("pause>0");

	return 0;
}