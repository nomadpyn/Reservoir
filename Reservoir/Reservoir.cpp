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

void Reservoir::operator=(const Reservoir& other){
	if (this->name != nullptr)
		delete[] this->name;
	int l = strlen(other.name) + 1;
	this->name = new char[l];
	for (int i = 0; i < l; i++)
		this->name[i] = other.name[i];
	this->width = other.width;
	this->length = other.length;
	this->depth = other.depth;
	this->surface = other.surface;
	this->volume = other.volume;
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

double Reservoir::GetWidht() const {
	return this->width;
}
double Reservoir::GetLength() const {
	return this->length;
}
double Reservoir::GetDepth() const {
	return this->depth;
}
double Reservoir::GetSurface() const {
	return this->surface;
}
double Reservoir::GetVolume() const {
	return this->volume;
}