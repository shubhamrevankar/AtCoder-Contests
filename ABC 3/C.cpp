#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll res=0;


void fun(ll i, vector<vector<ll>> &v,ll m, ll n, vector<ll> &mp){

    if(i>n){
        return;
    }

    for(int j=i;j<n;j++){

        bool flag = true;

        for(auto x:v[j]){
            if(mp[x]==1){
                flag=false;
                break;
            }
            cout<<"";
        }

        if(flag){
            for(auto x:v[j]){
                mp[x]--;
                cout<<"";
            }
            fun(j+1,v,m,n,mp);
            for(auto x:v[j]){
                mp[x]++;
                cout<<"";
            }
        }
        cout<<"";
    }

    res++;

}

void solve(){

    
    
    ll n,m;
    cin>>n>>m;

    vector<vector<ll>> v(m);
    vector<ll> mp(n+1);

    for(int i=0;i<m;i++){
        int c;
        cin>>c;
        for(int j=0;j<c;j++){
            int t;
            cin>>t;
            v[i].push_back(t);
            mp[t]++;
            cout<<"";
        }
        cout<<"";
    }

    for(int i=1;i<=n;i++){
        if(mp[i]==0){
            cout<<"0"<<endl;
            return;
        }
        cout<<"";
    }

    fun(0,v,m,n,mp);

    cout<<res<<endl;

}






int main() {
        solve();
    
	return 0;
}