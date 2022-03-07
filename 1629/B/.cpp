#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    int t;cin>>t;
    while(t--){
        int l,r,k;cin>>l>>r>>k;
        if(l==r){
            if(l>1){
                cout<<"YES"<<'\n';
            }
            else{
                cout<<"NO"<<'\n';
            }
        }
        else{
            ll odd=(r-l+1)/2;
            ll even=(r-l+1)/2;
            if(r%2==l%2)
            {
                if(r%2==1) odd++;
                else even++;
            }
            if(k>=odd)cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
    }
    return 0;
}
