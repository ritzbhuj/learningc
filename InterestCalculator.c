#include <stdio.h>

double interest (int x, double y, int z)
{
	return ( x * y * z);
}


int main(void)
{
	int x = 20000;
	double y = 0.05;
	int z = 24;
	printf("The Interest incurred for amount %d at rate %f for the duration of %d months is: %f \n", x, y, z, interest(x, y, z));
	
}
