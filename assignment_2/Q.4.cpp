//4. PALINDROME
#include<stdio.h>
main()
{
    int n,r,sum=0,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }

    n=temp;
    if(n==sum)
        printf("Number is Palindrome");
    else
        printf("Number is not Palindrome");
}

