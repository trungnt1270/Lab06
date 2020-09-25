void main9try4b()
{
	int i, j, k, l;
	i = 0;
	printf("Enter no. of rows : ");
	scanf("%d", &i);
	printf("\n");
	for(j=i;j>0;j--)
	{
		printf("\n");
		l=1;
		for(k=0;k<j;k++)
		{
			printf("%d ",l++);
		}
	}
}
