//area do circulo
#include <stdio.h>
#define PI 3.14159;

int main(void) {
	double r, a;
	
	scanf("%lf", &r);
	
	a = (r*r)*PI;
	
	printf("A=%.4lf\n", a);
	
	return 0;
}