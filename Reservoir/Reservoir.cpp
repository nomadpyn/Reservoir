#include "Reservoir.h"
#include<iostream>

using namespace std;

void Reservoir::print()
{
	cout << "Reservoir name - " << name << " | ";
	cout << "Max width is " << width << " | ";
	cout << "Max lenght is " << length << " | ";
	cout << "Max depth is " << depth  << endl;
}
