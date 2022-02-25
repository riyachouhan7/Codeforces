#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,a[200005],ans=0,k=1;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(ll i=0;i<n;i++){
        if(a[i]>=k){
            k++;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
