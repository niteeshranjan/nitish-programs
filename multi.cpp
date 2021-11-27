#include<iostream>
using namespace std;
class stu
{
int roll;
public:
void getroll(int);
void putroll();
};
void stu::getroll(int x)
{
roll=x;
}
void stu::putroll()
{
cout<<"Roll_no is"<<roll<<endl;
}
class test:public stu
{
public:
float m1,m2;
void getmarks(float,float);
void putmarks();
};
void test::getmarks(float x, float y)
{
m1=x;
m2=y;
}
void test::putmarks()
{
cout<<"Marks are"<<m1<<m2;
}
class result:public test
{
float total;
public:
void display()
{
total=m1+m2;
putroll();
putmarks();
cout<<"Total is"<<total<<endl;
}
};
int main()
{
result res;
res.getroll(20);
res.getmarks(25.6,56.7);
res.display();
}
