#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,co=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=n-2 ; i>=0; i--)
        {
            while(arr[i]>=arr[i+1] && arr[i]>0)
            {
                arr[i]/=2;
                co++;
            }
            if(arr[i]==arr[i+1] || arr[i]==0 && i>0)
            {
                co=-1;
                break;
            }
        }
    cout<<co<<endl;
    }
}