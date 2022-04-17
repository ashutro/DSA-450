#include<bits/stdc++.h>
using namespace std;
void Solve(vector<int>& v, int n, int x){
    int res =  n*x;
    int coff = 0;
    vector<int> ans;
    if(n&1){
           for(int i = 1; i < n;i++){
            coff += i;
        }
        int f = (res-coff)/n;
        int itr= 0;
         while (itr<n)
         {
             ans.push_back(f);
            f++;
            itr++;
        }
        for(int i = 0; i < n;i++){
            cout<<ans[i]<<" ";
         }cout<<"\n";
    }
    else{
        for (int i = 1; i <= (n / 2); i++)
             cout << x - i << ' ' << x + i << ' ';
         cout << '\n';
    }
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> v(n);
        Solve(v,n,x);
    }
    
    return 0;
}