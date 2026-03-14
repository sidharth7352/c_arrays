/*Move all zeros to the end while maintaing the order of other elements
*/

#include<stdio.h>
void array_zero_end(int *,int);
int main()
{
    int a[5],*p,ele,i;
    p=a;
    printf("Enter the array elements....\n");
    ele=sizeof(a)/sizeof(a[0]);
    for(i=0;i<ele;i++)
    scanf("%d",&a[i]);
    printf("Array elements are....\n");
    for(i=0;i<ele;i++)
    printf("%d ",a[i]);
    printf("\n");
    array_zero_end(p,ele);
    return 0;

}
void array_zero_end(int *p,int ele)
{
   
    int i,j=0;

    for(i=0;i<ele;i++)
    {
        if(p[i] != 0)
        {
            p[j] = p[i];
            j++;
        }
    }

    while(j < ele)
    {
        p[j] = 0;
        j++;
    }

    printf("Array after moving zeros:\n");
    for(i=0;i<ele;i++)
        printf("%d ",p[i]);

    printf("\n");

}