#include<iostream>
using namespace std;

class base1
{
protected:
int data1;
public:
base1(int x)
{
data1=x;
}
void printdata1()
{
cout<<"Value of data1"<<data1;
}
};

class base2
{
protected:
int data2;
public:
base2(int y)
{
data2=y;
}
void printdata2()
{
cout<<"Value of data 2"<<data2;
}
};

class derived:public base2,public base1
{
int data3;
public:
derived(int l,int s,int m):base1(l),base2(s)
{
data3=m;
}
void display()
{
cout<<"Derived class constructor"<<data3<<endl;
}
};

int main()
{
derived d1(5,6,7);
d1.printdata1();
d1.printdata2();
d1.display();
return 0;
}

