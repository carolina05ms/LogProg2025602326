#include <stdio.h>
#include <math.h>

int main()

{
	float L, pt, at, h;
	
	//asignacion de valores 
	
	L=2;
	h= sqrt(pow(3/2.0*L,2)+pow(L,2));
	
	pt=((h/2) + (2*1.4142)+ 5)*L;
	
	at=(pow(L,2))+(pow(L,2))+((3.0/2.0*L)*L)/2+(1.0/4.0*L)*2*L;
	
	
	printf("El perimetro total es: %f\n", pt);
	printf("El area total es: %f\n", at);
	return 0; 
}