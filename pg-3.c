// understanding if-else
#include <stdio.h>
void main()
{
	int marks;
	printf("enter marks ");
	scanf("%d",&marks);
	if (marks>=85)
		printf("Grade A");
	else if (marks>=60)
		printf("Grade B");
	else if (marks>=50)
		printf("Grade C");
	else if (marks>=40)
		printf("Grade D");
	else if (marks>=35)
		printf("Grade E");
	else
		printf("Grade F");
}
