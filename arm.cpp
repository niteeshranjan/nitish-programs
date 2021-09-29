#include<iostream>
using namespace std;
int main()
{
int num;
int orgNum;
int rem;
int result=0;
cout<<"Enter a three digit integer:\n";
cin>>num;
orgNum=num;
while(orgNum!=0)
{
rem=orgNum%10;
result+=(rem*rem*rem);
orgNum/=10;
}
if(result==num)
cout<<num<<"is an armstrong number\n";
else
cout<<num<<"is not an armstrong number\n";
return 0;
}
