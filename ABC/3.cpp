#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool flag1 = true;

void dfs(int i,int p,vector<vector<int>> &adj,int n,vector<bool> &vis){
    vis[i]=true;
    for(auto x:adj[i]){
        if(x!=p){
            if(!vis[x]){
                dfs(x,i,adj,n,vis);
            }
            else{
                flag1 = false;
            }
        }
        
    }
}


int main() {
	
    int n,m;
    cin>>n>>m;

    vector<bool> vis(n,false);
    vector<vector<int>> adj(n);
    int flag=true;
    for(int i=0;i<m;i++){
        
        int u,v;
        cin>>u>>v;
        u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    dfs(0,-1,adj,n,vis);

    if(flag1 == false){
        cout<<"No"<<endl;
        return 0;
    }
    bool flag = true;
    for(auto x:vis){
        if(x==false){
            flag = false;
            break;
        }
    }

    if(flag){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

	return 0;
}