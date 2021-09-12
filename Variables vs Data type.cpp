#include <iostream>
int main() 
{
	short x = 1000;
	short y = 100000000;
	//short x and y in [-32765..32767]
	std::cout << "x = " << x;
	std::cout << "\ny = " << y;
	int z = 100000000;
	std::cout << "\nz = " << z;
	int e = 10.5;
	std::cout << "\ne = " << e;
	float f = 10.5;
	std::cout << "\nf = " << f;
	double g = 10.5;
	std::cout << "\ng = " << g;
	//stockage de variable double 8 bits > float 4 bits
	char k = 'p';
	std::cout << "\nk = " << k;
	bool l = true;
	//true 1 false 0
	std::cout << "\nl = " << l;
	return 0;
}