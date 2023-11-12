#include<bits/stdc++.h>
#define ll long long 
#define endl "\n"
// constant
const int mod = 1e9+7;
using namespace std;
 
int main(){
    int t;  cin>>t;
    while(t--){
        int n,k,l; 
        cin>>n>>k>>l;
        std::vector<int> v;
        int M[n];
        int L[n];
        for(int i=0; i<n; i++){
            cin>>M[i]>>L[i];
        }
        bool flag  = false;
        int countLang = 0;
        for(int i =0; i<n; i++){
            if(l==L[i]){
                v.push_back(M[i]);
                flag = true;
                countLang++;
            }
        }
        if( (flag == false) || (k>countLang) ){
            cout<<-1<<endl;
            continue;
        }
        sort(v.begin(), v.end(), greater<int>());
        int sum = 0;
        for(int i =0 ; i<k; i++){
            sum = sum + v[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}