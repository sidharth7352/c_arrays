//program to print array elements using integer pointer

#include<stdio.h>
void main()
{
   int a[10],*p,i,ele;
   ele=sizeof(a)/sizeof(a[0]);
   p=a;
   printf("enter the array elements...\n");
   for(i=0;i<ele;i++)
   scanf("%d",&a[i]);

   printf("array elements are....\n");
   for(i=0;i<ele;i++)
   printf("%d ",*p++);

   printf("\n");
}

