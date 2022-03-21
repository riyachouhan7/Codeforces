#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin>>t;
	long long n;
	long long a[55];
	while(t--){
		cin>>n;
		for(long long i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
	cout<<a[n-1]-a[0]<<endl;
    }
	return 0;
}
