#include <stdio.h>
#include <stdlib.h>


int main()
{int n,count=0;
    printf("entrer the number\n");
    scanf("%d",&n);
    if(n==0)
    {


    printf("1");
    exit(0);

    }
    while(n>0)
    {
        count++;
        n=n/2;

    }
printf("%d",count);
    return 0;
}
