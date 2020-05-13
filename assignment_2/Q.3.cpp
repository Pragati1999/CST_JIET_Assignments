//3. DECIMAL TO BINARY
#include<stdio.h>
main()
{
    int num,i=0,arr[100],j;
    printf("Enter the decimal number:");
    scanf("%d",&num);
    while(num>0)
    {
        arr[i]=num%2;
        num=num/2;
        i++;
    }
printf("Binary number is:");

for(j=i-1;j>=0;j--)
    printf("%d",arr[j]);
}


