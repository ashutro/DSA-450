#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
vector<vector<int>> ans;

void permute(vector<int> &v, int idx){
    if(idx == v.size()){
        ans.push_back(v);
        return;
    }
    for(int i = idx ; i < v.size();i++){
        swap(v[i],v[idx]);
        permute(v,idx+1);
        swap(v[i],v[idx]);
    }
    return;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(auto &i : v){
            cin>>i;
        }
        permute(v,0);

        for(auto i : ans){
            for(auto j : i){
                cout<<j<<" ";
            }
            cout<<nl;
        }
    }
    
    return 0;
}