#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    int t;cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        pair<ll,ll> a[n];
        for(int i=0;i<n;i++)
            cin>>a[i].first;
        for(int i=0;i<n;i++)
            cin>>a[i].second;
        ll ans= k; 
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(ans>= a[i].first)
            {
                ans+=a[i].second;
            }
            else
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;       
}
