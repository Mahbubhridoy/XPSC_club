#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    fast();
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        string s1 , s2; cin >> s1 >> s2;
        int flag = 0;
        for(int i=0; i<n; i++){
            if( s1[i] != s2[i]){
                if( s1[i] == 'B' && s2[i] == 'G' || s1[i] == 'G' && s2[i] == 'B'){
                    continue;
                }
                else{
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }


    }
        return 0;
}


    