#pragma once
#include<cstring>

class Reservoir{
private:
	char* name;
	double width{};
	double length{};
	double depth{};
	double surface{};
	double volume{};
public:
	Reservoir(const char* nameP, double widthP, double lenghtP, double depthP)
		: width{ widthP }, length{ lenghtP }, depth{ depthP }{
		int l = strlen(nameP) + 1;
		this->name = new char[l];
		for (int i = 0; i < l; i++)
			this->name[i] = nameP[i];
		surface = calcSurface();
		volume = calcVolume();
	}
	Reservoir() :Reservoir("No name", 1, 1, 1) {}
	Reservoir(const Reservoir& other) :
		width{ other.width }, length{ other.length }, depth{ other.depth }, surface{ other.surface }, volume{ other.volume }{
		int l = strlen(other.name) + 1;
		this->name = new char[l];
		for (int i = 0; i < l; i++)
			this->name[i] = other.name[i];
	}
	~Reservoir() {
		delete[]name;
	}

	bool operator ==(const Reservoir& other);
	bool compType(const Reservoir& other);
	void print() const;
	double calcSurface();
	double calcVolume();
	 
};

