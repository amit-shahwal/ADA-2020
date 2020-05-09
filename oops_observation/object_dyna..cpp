#include <iostream>

using namespace std;
class student
{
    char name[30];
    int r_n;
    public:
    void get()
  {
      cout<<"enter the name of students\n";
      cin>>name;

      cout<<"enter the roll mumber\n";
      cin>>r_n;
  }
  void show()
  {
      cout<<"the name of student is :"<<name<<endl;
      cout<<"roll number of student is:"<<r_n<<endl;
  }
};
int main()
{ int n;
cout<<"enter the how many students you wanan eneter"<<endl;
cin>>n;

    student *p=new student[n];//dynamically_created_class
    for(int i=1;i<=n;i++)
 {

  p[i].get();
}
cout<<endl;
    for(int i=1;i<=n;i++)
 {

  p[i].show();
}
    return 0;
}
