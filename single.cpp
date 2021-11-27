#include<iostream>
using namespace std;

class employee
{
public:
int id;
float salary;
employee(int inpID)
{
id = inpID;
salary = 5600;
}
employee() {}
};
class programmer: public employee
{
public:
int languagecode;
programmer(int inpID)
{
id = inpID;
languagecode = 10;
}
void getdata()
{
cout<<id<<endl;
}
};
int main()
{
employee tom(1),jerry(2);
cout<<tom.salary<<endl;
cout<<jerry.salary<<endl;
programmer skillF(20);
cout<<skillF.languagecode<<endl;
cout<<skillF.id<<endl;
skillF.getdata();
return 0;
}
