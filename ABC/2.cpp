#include <bits/stdc++.h>
using namespace std;
#define ll long long




int main() {
	
    int n,m;
    cin>>n>>m;

    vector<string> s(n);
    for(auto &x:s) cin>>x;
    vector<string> t(m);
    for(auto &x:t) cin>>x;

int  res=0;
    for(int i =0;i<n;i++){
        int c=0;
        for(int j=0;j<m;j++){
            if(s[i].substr(3,3)==t[j]){
                c++;
                break;
            }
        }
        if(c){
            res++;
        }
    }
    
    cout<<res<<endl;

	return 0;
}