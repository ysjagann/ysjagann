#include<stdio.h>
int gcd(int a,int b,int *x,int *y){
	int x1,y1,gcd1;
	if(a==0){
		*x=0;
		*y=1;
		return b;
	}

	gcd1=gcd(b%a,a,&x1,&y1);
	*x=y1-(b/a*x1);
	*y=x1;
	return gcd1;
}
int main(){
	int m,n;
	int a=2,b=11;
	printf("gcd(%d %d)=%d",a,b,gcd(a,b,&m,&n));
	return 0;
}
