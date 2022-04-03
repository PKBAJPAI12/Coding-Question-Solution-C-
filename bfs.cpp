#include <iostream>
using namespace std;

int a[10][10],i,j,k,n,qu[10],front,rare,v,visit[10],visited[10];
int main()
{int m;
cout<<"enter no of vertices";
cin>>n;
cout<<"enter no of edges";
cin>>m;
cout<<"\nEDGES \n";
for(k=1;k<=m;k++)
{cin>>i>>j;
a[i][j]=1;
}
cout<<"enter initial vertices";
cin>>v;
cout<<"visited vertices\n";
cout<<v;
visited[v]=1;
k=1;
while(k<n)
{for(j=1;j<=n;j++)
if(a[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
{visit[j]=1;
qu[rare++]=j;
}
v=qu[front++];
cout<<v<<" ";
k++;
visit[v]=0; visited[v]=1;}
return 0;
}
/*int main()
{int i,n;
int r;
cin>>r;
//r=a[i];
cin>>n;
int a[n];
int value;
for(i=1;i<n;i++)
{cin>>value;}
//if(value>r)
//{value=a[i+1];}
//else if(value<r)
//{value=a[i-1];}
for(i=1;i<n+1;i++)
{a[i]=r;
if(value>r)
{a[i+1]=value;}
else 
{a[i-1]=value;}
cout<<a[n]<<endl;}
return 0;}*/
