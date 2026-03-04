/* WAP in C to sort array in decending order .
       i/p:  int a[5]={11,55,88,22,44}, *p ; 
        o/p:         88 55  44 22 11
*/

#include<stdio.h>
void main()
{
    int a[5],i,*p,j,temp;
    printf("Enter the array elements..\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    p=a;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            if(a[j]<a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
    printf("Array elements after descending operation...\n");
    for(i=0;i<5;i++)
    printf("%d ",*p++);

}