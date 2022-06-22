#include<iostream>
#include"Reservoir.h"

using namespace std;

int main() {

	Reservoir a("Prud Chaika", 8.15, 13.44, 2.14);
	Reservoir b = a;
	b.print();

	return 0;
}