#include<stdio.h>
void main()
{
	int a=10, b=4, c=3;
	a +=b;//14 4 3
	printf("%d %d %d\n",a,b,c);
	b -=c;//14 1 3
	printf("%d %d %d\n",a,b,c);
	c *=a;//14 1 42
	printf("%d %d %d\n",a,b,c);
	a /=b;//14 1 42
	printf("%d %d %d\n",a,b,c);
	b *=c;//14 42 42
	printf("%d %d %d\n",a,b,c);
	a +=b;//56 42 42
	printf("%d %d\n",a,b);
}
