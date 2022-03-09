#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    int t;cin>>t;
    while(t--){
        ll l,r,a;
        cin>>l>>r>>a;
        ll x=((r+1)/a)*a;
        x--;
        if(x<l || x>r)
            x=r;
        ll ans=x/a+x%a;
        cout<<ans<<'\n';
    }
    return 0;
}
