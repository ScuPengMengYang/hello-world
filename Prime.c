#include<stdio.h>
int isPrime(int x);
int sumNum(int x);
int mulNum(int x);
int sqrNum(int x);
int main(){
	int i,ssum=0,smax,n=0;
	for(i=100;1<999;i++){
	int is=isPrime(i);
    int sum=sumNum(i);
	int mul=mulNum(i);
	int sqr=sqrNum(i);
	if(isPrime(i)==1&&sumNum(i)==1&&mulNum(i)==1&&sqrNum(i)==1)
	{
	ssum=ssum+i;
	n=n+1;
	smax=i;
     }
	} 
	printf("超级素数的和是：%d\n超级素数的个数是：%d\n超级素数的最大是：%d\n",ssum,n,smax)
;
return 0;} 
int isPrime(int x){
	int a,b;
	for(a=2;a<x;a++)
	{
	b=x%a;
	if(b==0){
	return 0;
	break;}
	else
	return 1;
	}
}
int sumNum(int x){
	int a,j,b ;
	a=x%10+x/10%10+x/100%10;
	if(a==2)
	return 1;
	else{
	for(j=2;j<a;j++){
		b=a%j;
	if(b==0){
	return 0;
	break;}
	else
	return 1;
	}}
}
int mulNum(int x){
	int a,j,b; 
	a=(x%10)*(x/10%10)*(x/100%10);
	if(a==2)
	return 1;
	else{
	for(j=2;j<a;j++){
		b=a%j;
	if(b==0){
	return 0;
	break;}
	else
	return 1;
	}}
}
int sqrNum(int x){
	int a,j,b ;
	a=(x%10)*(x%10)+(x/10%10)*(x/10%10)+(x/100%10)*(x/100%10);
	if(a==2)
	return 1;
	else{
	for(j=2;j<a;j++){
		b=a%j;
	if(b==0){
	return 0;
	break;}
	else
	return 1;
	}}
}

