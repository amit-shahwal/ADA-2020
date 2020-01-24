#include <stdio.h>
#include <stdlib.h>
int i=1;
int check(int n)
{

            if(n==0||n==1)
                return i;

            else
                i++;
                return check(n/2);

    }
int main()
{int n;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("%d",check(n));
    return 0;
}
