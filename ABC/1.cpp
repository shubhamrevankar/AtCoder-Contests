#include <bits/stdc++.h>
using namespace std;
#define ll long long




int main() {
	
    ll n;
    cin>>n;
    ll c=0;
    for(ll i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="For") c++;
    }

    if(c <= n/2){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
    
	return 0;
}