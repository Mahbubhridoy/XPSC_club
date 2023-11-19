/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--) {
        int n;
        cin>>n;
         int result = 0;
         while(n!=50){
             if(n>50){
                 n-=3;
                 result++;
             }
             else{
                 n+=2;
                 result++;
             }
         }
         cout<<result<<endl; 
      
        
    }
    return 0;
}*/

#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
       int n;
        cin>>n;
         int result = 0;
         while(n!=50){
             if(n>50){
                 n-=3;
                 result++;
             }
             else{
                 n+=2;
                 result++;
             }
         }
         cout<<result<<endl; 
      
    }
    return 0;
}
