#include <stdio.h>
#include <stdlib.h>
int count(int n)
{
    int count=1;
    while(n>1)
{
        n=n/2;
        count++;
    }
    return count;
}
int rcount(int n)
{
    if(n<=1)
    return 1;
    else
    return (1+rcount(n/2));
}

int main()
{
    int n,c;
    printf("enter the value of n\n");
    scanf("%d",&n);
    c=count(n);
    printf("no of digits found using iteration:-%d\n",c);
    printf("no of digits found using recursion:-%d\n",rcount(n));
    return 0;
}
