// understanding pre, post increment and decrement operators
#include <stdio.h>
void main()
{
	int x=25, y=21, z;

	z=x&y;
	printf("\n x & y value is %d",z);
	z=x|y;
	printf("\n x | y value is %d",z);
	z=x^y;
	printf("\n x ^ y value is %d",z);
	z=x>>1;
	printf("\n x>>1 value is %d",z);
	z=x>>2;
	printf("\n x>>2 value is %d",z);
	z=x<<1;
	printf("\n x<<1 value is %d",z);
	z=x<<2;
	printf("\n x<<2 value is %d",z);

     printf("\n number of bytes of x is %d",sizeof(x)) ;
}
