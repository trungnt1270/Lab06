void main9try4a()
{
	int i, j, k, l;
	i = 0;
	printf("Enter no. of rows : ");
	scanf("%d", &i);
	printf("\n");
	for(j=0;j<i;j++)
	{
		printf("\n");
		l=0;
		for(k=0;k<=j;k++)
		{
			printf("%d ",l++);
		}
	}
}
