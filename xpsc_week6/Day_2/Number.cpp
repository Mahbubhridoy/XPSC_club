#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int x,y,a,b,temp;
       cin>>x>>y;
 
        b=y/x;
        if(y%x!=0)
        {
            cout<<"0 0"<<endl;
        }
        else 
        {
            cout<<"1 "<<b<<endl;
        }
        
    }
}