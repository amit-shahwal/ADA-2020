#include <iostream>

using namespace std;
int fun(int &a)
{
    a=30;
    return a;

}
int main()
{   int y;
y=10;
cout<<"before calling function"<<y<<endl;
fun(y);

cout<<"after calling "<<y;
    return 0;
}
