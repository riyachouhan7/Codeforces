#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin >> n;
        int cnt = 0;
        if (n == 1)
        {
            cout << "1" << endl;
            continue;
        }
        else if (n == 2)
        {
            cout << "2" << endl;
            continue;
        }
 
        while (n)
        {
            if (n >= 3)
            {
                cnt++;
                n=n-3;
            }
            if(n==1 || n==2 || n==0) break;
        }

        if (n == 0)
        {
            for (int i = 1; i <= cnt; i++)
                cout << "21";
                cout<<endl;
        }
        else if (n == 1)
        {
            for (int i = 1; i <= cnt; i++)
                cout << "12";
            cout << "1" << endl;
        }
        else
        {
            for (int i = 1; i <= cnt; i++)
                cout << "21";
            cout << "2" << endl;
        }
    }
 
    return 0;
}
