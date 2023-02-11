#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){

    ll n,k;
    cin>>n>>k;
    vector<string> a(k);
    for(auto &x:a){
        cin>>x;
    }
    string tmp;
    for(int i=k;k<n;k++){
        cin>>tmp;
    }

    sort(a.begin(),a.end());

    for(auto x:a){
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