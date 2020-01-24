#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int n)
{
    if(n==0)
    return m;
    else
    gcd(n,m%n);

}
int main()
{int a,b;
    printf("entyer two numbers  \n");
    scanf("%d%d",&a,&b);
    printf("gcd=%d",gcd(a,b));

    return 0;
}
