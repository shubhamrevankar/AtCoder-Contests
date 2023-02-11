#include <bits/stdc++.h>
using namespace std;
#define ll long long

// set<pair<ll,ll>> s;
// ll res=0;

// vector<ll>::iterator it;

// void dfs(ll i,ll p,vector<vector<ll>> &adj,ll n,vector<bool> &call){

//     call[i] = true;



//     for(auto x:adj[i]){
//         if(x!=p && x!=-1){
//             if(!call[x]){
//                 dfs(x,i,adj,n,call);
//             }
//             else{
//             //     pair<ll,ll> t = {min(i,x),max(i,x)};
//             //     s.insert(t);
//                 it = find(adj[i].begin(),adj[i].end(),x);
//                 *it = -1;
//                 it = find(adj[x].begin(),adj[x].end(),i);
//                 *it = -1;
//                 res++;
//             }
//         }
//     }



//     call[i] = false;

// }


void DFSCycle(int u, int p, int color[], int par[], int& cyclenumber,vector<vector<ll>> &adj){

   //the node is already considered
   if (color[u] == 2) {
      return;
   }
   
   //partially visited node found i.e new cycle found
   if (color[u] == 1) {
      cyclenumber++;
     
      return;
   }
   
   //storing parent of u
   par[u] = p;
   
   //marking as partially visited
   color[u] = 1;
   for (int v : graph[u]) {
   
      if (v == par[u]) {
         continue;
      }
      DFSCycle(v, u, color, par, cyclenumber,adj);
   }
   
   //marking as fully visited
   color[u] = 2;
}



void solve(){

    ll n,m;
    cin>>n>>m;
    
    vector<vector<ll>> adj(n);

    for(ll i=0;i<m;i++){
        ll u,v;
        cin>>u>>v;
        u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // vector<bool> call(n,false);

    // dfs(0,-1,adj,n,call);

    // for(int i=0;i<n;i++){
    //     cout<<i+1<<" : ";
    //     for(auto x:adj[i]){
    //         cout<<x<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<res<<endl;





    int color[n];
   int par[n];

   int cyclenumber = 0;
  
   DFSCycle(1, 0, color,par, cyclenumber);
   
    cout<<"count of cycles in the undirected graph : "<<cyclenumber;



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



