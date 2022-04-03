#include <bits/stdc++.h>
using namespace std;
int main()
{int i,j,a[100][100],n,c=0,d=0,sum=0;
cin>>n;
for(i=0;i<n;i++)
{for(j=0;j<n;j++){cin>>a[i][j];
}
cout<<endl;

}
for(i=0;i<n;i++)
c=c+a[i][i];
for(i=0;i<n;i++)
d=d+a[i][n-1-i];
 sum=abs(c-d);
 cout<<sum;
}
