#include<stdio.h>
void main()
{
	int a=101, b=23;
	a +=b;
	printf("%d %d\n",a,b);
	a -=b;
	printf("%d %d\n",a,b);
	b *=a;
	printf("%d %d\n",a,b);
	b /=a;
	printf("%d %d\n",a,b);
	a %=b;
	printf("%d %d\n",a,b);
}
