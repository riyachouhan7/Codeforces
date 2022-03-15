#include <bits/stdc++.h>
using namespace std;
int  main()
{
	int t;cin>>t;
	while(t--){
	    int n,m,r,c;
	    cin>>n>>m>>r>>c;
	    char k[n+1][m+1];
        bool a1=false,a2=false,a3=false;
	    for(int i=1;i<=n;i++){
	    	for(int j=1;j<=m;j++){
	    		cin>>k[i][j];
	    		if(i==r && j==c && k[i][j]=='B')
	    			a1=true;
	    		if(k[i][j]=='B')
                    a2=true;
	    	}
	    }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(i==r && k[i][j]=='B')
                    a3=true;
                if(j==c && k[i][j]=='B')
                    a3=true;
            }
        }
        if(a1)
            cout<<"0"<<endl;
        else if(a3)
            cout<<"1"<<endl;
        else if(a2)
            cout<<"2"<<endl;
        else 
        	cout<<"-1"<<endl;
    }
    return 0;
}
