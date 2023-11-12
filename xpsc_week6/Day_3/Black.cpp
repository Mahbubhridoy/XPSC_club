#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while (t--){
	    int n,k;cin>>n>>k;
	    string s;cin>>s;
	    int arr[n];
	    if (s[0]=='W') arr[0]=1;
	    else arr[0]=0;
	    for (int i=1;i<n;i++){
	        arr[i]=0;
	        if (s[i]=='W') arr[i]++;
	        arr[i]+=arr[i-1];
	    }
	    int min = arr[k-1];
	    for (int i=0;i<n-k;i++){
	        if (arr[i+k]-arr[i]<min) min=arr[i+k]-arr[i];
	    } 
	    cout<<min<<endl;
	}
	return 0;
}
