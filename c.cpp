#include <iostream>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
int main()
{int n,i,t,count=0;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{cin>>a[i];}
t=a[0];
for(i=1;i<n;i++)
{if(t<a[i])
{a[i]=t;}
}
for(i=0;i<n;i++)
{if(a[i]==t)
{count=count+1;}
}
cout<<count;
return 0;
}

