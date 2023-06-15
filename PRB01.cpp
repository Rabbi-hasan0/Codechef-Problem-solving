#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define lli long long int
#define nn endl;
#define test() int t;cin>>t;while(t--)
#define yes "YES"
#define no "NO"
using namespace std;
bool f(int n)
{
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0) return false;
    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
         return false;
    }
    return true;
}
int main()
{
    test()
    {
        int n;
        cin>>n;
        if(f(n))cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }

    return 0;
}
