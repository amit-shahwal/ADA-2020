#include <iostream>

using namespace std;
int cal(int a,int b)
{
    return a+b;
}
float cal(int r)
{
    return (3.14*r*r);
}

int main()
{
cout<<cal(2,3);
cout<<endl;
cout<<cal(5);
cout<<endl;
    return 0;
}
