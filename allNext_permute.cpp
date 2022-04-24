#include<bits/stdc++.h>

using namespace std;
#define nl "\n"
vector<vector<int>> ans;
void Solver(vector<vector<int>> &ans, vector<int> v, int idx){
    if(idx == v.size()){
        ans.push_back(v);
        return;
    }
    for(int i = idx; i < v.size();i++){
        if(i != idx && v[i] == v[idx]) //logic to avoid the common elements swap:
            continue;
        swap(v[i],v[idx]);
        Solver(ans,v,idx+1);
    }
    return;

}
vector<vector<int>> permute(vector<int> v){
    sort(v.begin(),v.end());
    vector<vector<int>> ans;
    Solver(ans,v,0);

    return ans;
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
        vector<vector<int>> ans = permute(v);
        for(auto i:ans){
            for(auto j : i){
                cout<<j<<" ";
            }
            cout<<nl;
        }
    }
    
    return 0;
}


