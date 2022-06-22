#pragma once
#include<cstring>

class Reservoir
{
private:
	char * name;
	double width{};
	double length{};
	double depth{};
	double surface{};
	double volume{};
public:
	Reservoir(const char * nameP, double widthP, double lenghtP, double depthP) 
		: width{ widthP }, length{ lenghtP }, depth{ depthP }{
		int l = strlen(nameP) + 1;
		this->name = new char[l];
		for (int i = 0; i < l; i++)
			this->name[i] = nameP[i];	
		surface = calcSurface();
		volume = calcVolume();
	}
	Reservoir() :Reservoir("No name", 1, 1, 1) {}
	~Reservoir() {
		delete[]name;
	}
	void print() const ;
	double calcSurface();
	double calcVolume();

};

