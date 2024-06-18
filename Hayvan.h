#pragma once
#include <iostream>
using namespace std;

class Hayvan {
public:
	//Constructor
	Hayvan(string _isim);
	//***********
	void beslen();
	void uyu();
	
	void setIsim(string _isim);
	string getIsim();

private:

	string isim;

};