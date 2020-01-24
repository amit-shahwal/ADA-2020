#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50];int c=0;
    int n,i,j;
    printf("enter your array size\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
        {
            for(j=i;j<n;j++)
        {
            if(a[i]==a[j+1])
            {
                    printf("false");
                    exit(0);
            }
        }
    }
    printf("TURE\n");
    return 0;
}
