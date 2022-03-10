#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int ans = pow(2,n);
        cout<<ans-1<<'\n';
    }
    return 0;
}
