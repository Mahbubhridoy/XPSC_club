#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    fast();
    int k, s;
    cin >> k >> s;       //k=0,1,2
    int count =0, sum;
    for(int i=0; i<=k; i++){
        for(int j=0; j<=k; j++){
             sum = i+j;
        int x = s - sum;  //x= ja baki ase...
        if(x < 0){
            continue;
        }
        else if(x <=k){
            count++;
        }
    }
}
  cout << count << "\n";
    return 0; 
    }