#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    fast();
    int test;cin>>test;
    while(test--){
        int n;
        cin >> n;
         string str;
         cin >> str;
         transform(str.begin(), str.end(), str.begin(), ::tolower);
         string ans = "";
         for(int i = 0; i < str.size(); i++)
         {
             if(ans.empty() || ans.back() != str[i])
                ans += str[i];
         }
 
         if(ans == "meow")
         {
             cout << "YES\n";
         }
         else
            cout << "NO\n";
 
 

    }
        return 0;
}