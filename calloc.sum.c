//dynamic memory allocation using callock
#include<stdio.h>
#include<stdlib.h>
void main()
{

    int i,n,*ptr,sum=0;
    printf("emter the number of element =\n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\n %d",*(ptr+i));
    }
     printf("\n enter number=");
    for(i=0;i<n;i++)
    {
       scanf("%d",ptr+i);
       sum=sum+*(ptr+i);
    }
    printf("sum=%d",sum);
}
