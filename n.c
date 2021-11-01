#include<stdio.h>
void main()
{
	int a=30,b=15,c,d,e,f,g;
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b;
	printf("sum of %d and %d is %d\n",a,b,c);
	printf("difference of %d and %d is %d\n",a,b,d);
	printf("product of %d and %d is %d\n",a,b,e);
	printf("quotient of %d and %d is %d\n",a,b,f);
	printf("remainder of %d and %d is %d\n",a,b,g);
	printf("\nsum of all arithmetic operation is %d",(a+b)+(a-b)+(a*b)+(a/b)+(a%b) );
}
