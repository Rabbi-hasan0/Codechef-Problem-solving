/*problem link:https://www.codechef.com/problems/FUM */

#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;

long long fact(int n){
 if(n==1||n==0) return 1;
 return ((fact(n-1)%MOD)*n)%MOD;
}
int main(){
    int t=1;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        cout<<fact(n)<<'\n';
    }
    return 0;
}
