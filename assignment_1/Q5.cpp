//5. SQT ROOT

/*#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=0.01;i<n;i=i+0.01);
    printf("%d",i);
return 0;
}*/
//finding square root of a no.

#include<stdio.h>
main()
{
	int n ,i=0 ;
	int root=1;
	printf("enetr number ");
	
	scanf("%d",&n);
	while(1)
	{
		i=i+1;
		root = (n/root+root)/2;
		if(i == n+1)
		{
			break;
		}
		
	}
	printf("%d",root);
	
}
