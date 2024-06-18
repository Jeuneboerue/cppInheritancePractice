#pragma once
#include <iostream>
#include "Hayvan.h"

using namespace std;

class Kedi : public Hayvan {
public:

	Kedi(string _ad);

	void fareYakala();
};
