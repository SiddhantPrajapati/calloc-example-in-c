#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i,n;
    printf("initial size of array is 4\n");
    p=(int*)calloc(4,sizeof(int));
    for(i=0;i<4;i++)
        {
            printf("\n%d",*(p+i));

    }
    for(i=0;i<4;i++);
    {
        printf("enter the element at index:%d",i);
        scanf("%d",p+i);
    }
    printf("\n incresing the size of element by 5 element..\n");
    p=(int*)realloc(p,9*sizeof(int));
    for(i=0;i<9;i++)
    {
        printf("enter the element at index %d:",i);
        scanf("%d",p+1);
    }
    printf("final array:\n\n");
    for(i=0;i<9;i++)
    {
        printf("%d",*(p+1));
    }
    return 0;
}
