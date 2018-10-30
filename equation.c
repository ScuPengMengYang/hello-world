#include <stdio.h>
int main(){
	double a,b,c,d,e,f,x,y;
	printf("求解下列关于x，y的方程组\nax+by=c\ndx+ey=f\n请按顺序输入a,b,c,d,e,f的值\n");
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
	x=(c*e-b*f)/(a*e-b*d);
	y=(c*d-a*f)/(b*d-a*e);
	printf ("x=%lf\ny=%lf",x,y);
	return 0;
}
