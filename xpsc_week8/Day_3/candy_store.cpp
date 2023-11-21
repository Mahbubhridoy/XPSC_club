#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    fast();
    int test;cin>>test;
    while(test--){
    	int a,b;
	    cin>>a>>b;
	    if(a>=b) cout<<b<<endl;
	    else {
	        int c=b-a;
	        cout<<a+(c*2)<<endl;
	    }
    

    }
        return 0;
}