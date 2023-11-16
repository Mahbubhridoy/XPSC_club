#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,T;
    int* B;
    cin>>T;
    for (int i=0;i<T;i++){
        cin>>N;
        B = new int[N];
        for (int j=0;j<N;j++){
            cin>>B[j];
        }
        for (int j=0;j<N;j++){
            cout<<(1^B[j])<<" ";
        }
        cout<<"\n";
    }
    
	return 0;
}
