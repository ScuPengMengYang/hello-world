#include <stdio.h>
int main(){
	double a,b,c,d,e,f,x,y;
	printf("������й���x��y�ķ�����\nax+by=c\ndx+ey=f\n�밴˳������a,b,c,d,e,f��ֵ\n");
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
	x=(c*e-b*f)/(a*e-b*d);
	y=(c*d-a*f)/(b*d-a*e);
	printf ("x=%lf\ny=%lf",x,y);
	return 0;
}
