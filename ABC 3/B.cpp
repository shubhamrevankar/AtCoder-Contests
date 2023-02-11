#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> res;

void dfs(ll i,ll p,vector<vector<ll>> &adj, vector<bool> &vis, vector<ll> &temp){

    vis[i] = true;
    temp.push_back(i);
    for(auto x:adj[i]){
        if(x!=p){
            dfs(x,i,adj,vis,temp);
        }
    }

}


void solve(){

    ll n,m;
    cin>>n>>m;
    
    vector<vector<ll>> adj(n+1);

    for(int i=0;i<m;i++){
        int t;
        cin>>t;
        adj[t].push_back(t+1);
        adj[t+1].push_back(t);
    }

    vector<bool> vis(n+1);
    vector<ll> temp;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i,-1,adj,vis,temp);
            sort(temp.begin(),temp.end(),greater<ll>());
            for(auto tm: temp){
                res.push_back(tm);
            }
            temp.clear();
        }
    }

    for(auto c:res){
        cout<<c<<" ";
    }
    cout<<endl;

}






int main() {
        solve();
    
	return 0;
}