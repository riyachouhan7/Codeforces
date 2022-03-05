By riyachouhan_, contest: Codeforces Round #774 (Div. 2), problem: (A) Square Counting, Accepted, #, Copy
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ll t;cin>>t;
    while(t--){
        ll n,s;
        cin>>n>>s;
        cout<<s/(n*n)<<'\n';
    }
    return 0;
}
