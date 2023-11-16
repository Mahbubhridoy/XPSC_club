#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--){
	    int x;
	    cin>>x;
	    if (x%7==0 and x%2==0){
	        cout<<"Alice"<<endl;
	    }
	    else if (x%2!=0 and x%9==0){
	        cout<<"Bob"<<endl;
	    }
	    else{
	        cout<<"Charlie"<<endl;
	    }
	}
	return 0;
}
