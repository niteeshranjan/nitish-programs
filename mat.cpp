#include<iostream>
using namespace std;
int main()
{
int a[5][5], n, m, i, j;
cout<<"Enter value of m and n:\n";
cin>>m>>n;
cout<<"\nEnter elements of matrix:\n";
for(i=0;i<m;++i)
for(j=0;j<n;++j)
cin>>a[i][j];
cout<<"\n the matrix is:\n";
for(i=0;i<m;++i)
{
for(j=0;j<n;++j)
cout<<a[i][j]<<" ";
cout<<"\n";
}
return 0;
}
