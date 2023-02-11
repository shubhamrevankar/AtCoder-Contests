#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){

    ll n;
    cin>>n;
    vector<ll> a(n);
    for(auto &x:a){
        ll a,b;
        cin>>a>>b;
        x = (a+b);
    }

    for(auto &x:a){
        cout<<x<<endl;
    }


}






int main() {
	// ll t;
    // cin>>t;
    // while (t--)
    // {
        solve();
    // }
    
	return 0;
}