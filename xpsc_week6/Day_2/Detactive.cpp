#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
//long long int a, b;
void solve(){
    string s;
    cin>>s;
    if(s.size()==1 || s[0]=='0' || s[s.size()-1]=='1'){
        cout<<1<<endl;
        return;
    }
    int l_1 = -1 , f_0 = -1;
    int count = 0;
    for(int i = 0; i<s.size(); ++i){
        if(s[i]=='?'){
            count++;
        }
        else if(s[i]=='1'){
            l_1 = i;
        }
        else{
            f_0 = i;
            break;
        }
    }
    if(count == s.size()){
        cout<<s.size()<<endl;
        return;
    }
    if(l_1==-1){
        cout<<f_0+1<<endl;
    }
    else if(f_0==-1){
        cout<<s.size()-l_1<<endl;
    }
    else{
        cout<<f_0-l_1+1<<endl;
    }

}
int main()
{   
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}		