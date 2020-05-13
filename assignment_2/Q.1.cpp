//1. SEARCH AN ELEMENT
#include<stdio.h>
main()
{
    int i,n;
    int ary[10]={1,2,3,4,5,6,7,8,9,0};
    printf("Enter the number to find :");
    scanf("%d",&n);
    for(i=0;i<=9;i++)
    {
        if(ary[i]==n)
        {
            printf("Number identified in array");
        }
    }
}

