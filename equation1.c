#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c;
	float x1,x2,m;
	printf("������з���\nax^2+bx+c=0\n����������a,b,c��ֵ\n");
	scanf("%f%f%f",&a,&b,&c);
	m=b*b-4*a*c;
	x1=(-b+sqrt(m))/(2*a);
	x2=(-b-sqrt(m))/(2*a);
	printf("x1 = %f\nx2 = %f\n",x1,x2);
	return 0;
} 
