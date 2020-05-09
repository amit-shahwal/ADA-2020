#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{   int n,sum=0;;
    cout<<"enter the size of n \n";
    cin>>n;
    int *p=new int[n];//dynamic allcation
    cout<<"enetr the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        sum=sum+p[i];
    }
    cout<<sum;
    delete(p);//deleting_pointer varaible
    return 0;
}
