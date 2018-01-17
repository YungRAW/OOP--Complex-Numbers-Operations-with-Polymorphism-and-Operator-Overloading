#include "complex.h"
#include <Windows.h>



int main()
{
	complex z;
	complex z1;
	complex z2(5);
	complex z3(2, 3);
	complex z4 = z2;

	z = ((z1 ^ 3) + (z3 ^ 3)) / ((z2 ^ 4) + (z4 ^ 4));

	z.display();

	Sleep(3500);

	return 0;
}