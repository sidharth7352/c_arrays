#include<stdio.h>
void main()
{
	int a[5],ele,i,j,c,k;
	printf("Enter the array elements....\n");
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	printf("array elements are...\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");


	for(i=0;i<ele;i++)
	{
		for(j=i+1,c=1;j<ele;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<ele;k++)
				{
					a[k]=a[k+1];
                                }
					ele--;
					j--;
					c++;
				
			}
		}
		printf("%d = %d times\n",a[i],c);

	}
	//for(i=0;i<ele;i++)
	//printf("%d ",a[i]);
	//printf("\n");
}
