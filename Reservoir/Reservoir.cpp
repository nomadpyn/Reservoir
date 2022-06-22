#include "Reservoir.h"
#include<iostream>

using namespace std;

void Reservoir::print() const
{
	cout << "Reservoir name - " << this->name << " | ";
	cout << "Max width is " << this->width << " | ";
	cout << "Max lenght is " << this->length << " | ";
	cout << "Max depth is " << this->depth  << " | ";
	cout << "Surface is " << this->surface << endl;
}

double Reservoir::calcSurface() {
	return (this->width * this->length);
}