/* understanding pre, post increment and decrement operators*/
#include <stdio.h>
void main()
{
	int x=10, y;

	y=(++x>10)?100:200;
	printf("\n x value is %d, y value is %d",x, y);
	y=(x++>10)?100:200;
	printf("\n x value is %d, y value is %d",x, y);
}
