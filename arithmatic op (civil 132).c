/* All arithmetic operations */
#include<stdio.h>
void main()
{
	int a,b,s,p,m,r,o;
	a=23;
	b=44;
	s=a+b;
	printf("Sum of the %d & %d is: %d\n",a,b,s);
	p=a-b;
	printf("Difference of the %d & %d is: %d\n",a,b,p);
	m=a*b;
	printf("Product of the %d & %d is: %d\n",a,b,m);
	r=a/b;
	printf("Quotient of the %d & %d is: %d\n",a,b,r);
	o=a%b;
    printf("Remainder of the %d & %d is: %d\n",a,b,o);
}
