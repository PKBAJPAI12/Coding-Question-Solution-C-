#include <bits/stdc++.h>

using namespace std;
int main()
{int i,n,rem,round,v;
cin>>n;
int g[n];
for(i=0;i<n;i++)
{cin>>g[i];
//v=g[i]/5;
rem=g[i]%5;
round=5-rem;
if(g[i]<38)
{cout<<g[i];}
else if(g[i]>=38 && rem>2)
{int ans=g[i]+round;
cout<<ans;}
else
{cout<<g[i];}}
return 0;
}