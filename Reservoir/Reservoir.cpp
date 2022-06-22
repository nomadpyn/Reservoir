#include "Reservoir.h"
#include<iostream>

using namespace std;

bool Reservoir::operator==(const Reservoir& other){
	return this->surface == other.surface;
}

bool Reservoir::compType(const Reservoir& other) {
	char y = this->name[0];
	for (int i = 0; y != ' '; i++) {
		if (this->name[i] != other.name[i])
			return false;
		y = this->name[i];
	}
return true;
}

void Reservoir::print() const
{
	cout << "Reservoir name - " << this->name << " | ";
	cout << "Max width is " << this->width << " | ";
	cout << "Max lenght is " << this->length << " | ";
	cout << "Max depth is " << this->depth  << " | ";
	cout << "Surface is " << this->surface << " | ";
	cout << "Volume is " << this->volume << endl;
}

double Reservoir::calcSurface() {
	return (this->width * this->length);
}

double Reservoir::calcVolume() {
	return (this->width * this->length * this->depth);
}
