#include<iostream>
using namespace std;
class student
{
protected:
int roll;
public:
void getroll(int);
void putroll();
};
void student::getroll(int x)
{
roll=x;
}
void student::putroll()
{
cout<<"Roll no is"<<roll<<endl;
}

class test:public virtual student
{
protected:
float m1,m2;
public:
void getmarks(float x,float y)
{
m1=x;
m2=y;
}
void putmarks()
{
cout<<"Marks"<<m1<<m2<<endl;
}
};
class sports:public virtual student
{
protected:
int sp;
public:
void getsports(int p)
{
sp=p;
}
void putsports(void)
{
cout<<"Sports"<<sp;
}
};
class result:public test,public sports
{
float total;
public:
void display()
{
total=m1+m2+sp;
putroll();
putmarks();
putsports();
cout<<total;
}
};
int main()
{
result res;
res.getroll(2);
res.getmarks(2.3,54.0);
res.display();
return 0;
}
