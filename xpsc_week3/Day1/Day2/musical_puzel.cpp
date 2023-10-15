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
 
        set<string> st;
        for(int i = 0; i < str.size()-1; i++)
        {
            string temp = str.substr(i, 2);
            st.insert(temp);
        }
 
        cout << st.size() << "\n";

    }
        return 0;
}