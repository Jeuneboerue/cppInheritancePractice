#pragma once
#include <iostream>
#include "Hayvan.h"

using namespace std;

class Kopek : public Hayvan {
public:

	Kopek(string _ad);
	
	void havla();

	static int getKopekSayisi() {
		return kopekSayisi;
	}

private:

	static int kopekSayisi;
};