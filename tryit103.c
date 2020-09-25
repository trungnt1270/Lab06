#include <stdio.h>
main10try3()
{
	int i, j, num, numt;
	printf("\nEnter the number : ");
	scanf("%d",&num);
	for(i=1,j=num;i<=10;i++)
	{
		printf("\n%d * %d = %d", j, i, i*j);
	}
}

