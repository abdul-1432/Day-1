// value conversion into octal and hexadecimal
#include <stdio.h>
void main()
{
	int a=266;
	printf("\n %d   %o   %x   %X",a,a,a,a);
	printf("\n %d",(2>5));
	printf("\n %d",(2<5));
	printf("\n %d",7%2);	//   1
	printf("\n %d",2%7);	//   1

	if (-7)     // if (5<2)
		printf("\n Good");
	else
		printf("Bad");

}
