/*problem link: https://www.codechef.com/problems/SUMOFPROD1*/

#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long cnt = 0;
        long long sum = 0;
        for(int i = 1 ; i <= n ; i++){
            int x;
            cin >> x;
            if(x==0){
                if(cnt > 0){
                    sum+= (cnt*(cnt+1))/2;
                    cnt = 0;
                }
            }
            else{
                cnt++;
            }
        }
        if(cnt > 0){
        sum+= (cnt*(cnt+1))/2;
        }
        cout << sum <<"\n";
    }
}
