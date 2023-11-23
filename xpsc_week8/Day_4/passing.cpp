#include <bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin>>test;
    while(test--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i] > a[j]){
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        int b = a[x-1];
        cout<<(b-1)<<endl;
    }
	return 0;
}