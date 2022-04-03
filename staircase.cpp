#include <bits/stdc++.h>

using namespace std;

int main()
{int a,l;
cin>>a;
for(int i=1;i<a+1;i++)
        {
        for(int k=1;k<=a-i;k++)
            {
        cout<<" ";  
            }
        for(l=i;l>0;l--)
            {
            cout<<"#";
        }
        cout<<endl;;
        }    
    return 0;
}

