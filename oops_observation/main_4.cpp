#include <iostream>

using namespace std;
int fun(int a=10,int b=20 ,int c=30);
int main()
{



cout<<"after calling "<<fun(5);//55
cout<<endl;
cout<<"after calling "<<fun(5,5);//40
cout<<endl;
cout<<"after calling "<<fun();//60
cout<<endl;
cout<<"after calling "<<fun(5,5,5);//15
    return 0;
}
int fun(int a,int b ,int c)
{

    return a+b+c;

}
