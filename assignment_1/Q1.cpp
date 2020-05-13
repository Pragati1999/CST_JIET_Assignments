//1. number which appears one time
#include<stdio.h>
    main()
    {
        int a[]={5,3,3,4,5,2,4};

        int res=a[0];
        for(int i=1; i<7; i++)
        {
            res=res^a[i];
        }
        printf("single repeated element is %d",res);
    }

