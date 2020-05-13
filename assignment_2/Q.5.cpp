//5. COPY STRING
#include<stdio.h>
main()
{
    char a[20],b[20];
    int i;
    printf("Enter the string:");
    scanf("%s",a);

    for(i=0;a[i]!='\0';i++)
        b[i]=a[i];

    b[i]='\0';
    printf("After copy =%s",b);
}
