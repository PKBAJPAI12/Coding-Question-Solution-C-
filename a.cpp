#include <bits/stdc++.h>
using namespace std;
int main()
{int n,i;
int min=0;
int max=0;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{cin>>a[i];
}
for(i=1;i<n;i++){
     int temp=a[i];
     int j=i-1;
      while((temp<a[j])&&(j>=0)){
         a[j+1]=a[j];
         j=j-1;
      }
      a[j+1]=temp;
}
   for(i=0;i<n;i++)
  {  cout<<a[i]<<endl;}


for(i=0;i<n-1;i++)
{min=min+a[i];}

for(i=1;i<n;i++)
{max=max+a[i];}
cout<<min<<endl;
cout<<max<<endl;

return 0;
}