#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    fast();
    int test;cin>>test;
    while(test--){
         string str;
        cin >> str;
        bool flag = true;
 
        if(str.size() == 1)
        {
            if(str[0] != 'Y' && str[0] != 'e' && str[0] != 's')
                flag = false;
        }
        else
        {
            for(int i = 0; i < str.size()-1; i++)
            {
                if(str[i] == 'Y' && str[i+1] == 'e');
                else if(str[i] == 'e' && str[i+1] == 's');
                else if(str[i] == 's' && str[i+1] == 'Y');
                else
                    flag = false;
            }
 
        }
 
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
 

    }
        return 0;
}