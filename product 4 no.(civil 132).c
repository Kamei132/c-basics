#include<stdio.h>
void main()
{
	int a,b,c,d,e;
	printf("entre four number:");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	e = a*b*c*d;
	printf("product of %d,%d,%d and %d is: %d",a,b,c,d,e);
}
