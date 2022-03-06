#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],cost=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        int j=n-1,i=0;
        while(j>=0 && a[j])
            j--;
        while(i<n && a[i])
            i++;
        if(j<0)
            cout<<0<<'\n';
        else
            cout<<j-i+2<<'\n';
    }
    return 0;
}
