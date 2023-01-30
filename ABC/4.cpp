#include <bits/stdc++.h>
using namespace std;
#define ll long long


bool fun(string a,string b,int n){

    for(int i=0;i<n;i++){
        if(a[i]!='?' && b[i]!='?' && a[i]!=b[i]){
            return false;
        }
    }

    return true;
}

int main() {
	
    string s,t;
    cin>>s;
    cin>>t;
    int n = s.length();
    int tn = t.length();

    for(int x=0;x<tn;x++){


        if(fun(s.substr(0,x)+s.substr(n-x,tn-x),t,tn)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }



    }
    


	return 0;
}