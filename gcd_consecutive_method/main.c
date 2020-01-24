#include <stdio.h>
#include <stdlib.h>

int min(int a,int b)
{

    if(a>b)
    return b;
    else
    return a;
}

int main()
{int a,b;
    printf("enter the two numbers\n");
    scanf("%d%d",&a,&b);
    int t;
    t=min(a,b);
    do
    {
    if(a%t==0)
    {
        if(b%t!=0)
        t--;
    else
        {
        printf("%d",t);
        exit(1);

        }
    }
    else
    {
  t--;
    }


    }while(1);
    return 0;

}
