#include<bits/stdc++.h>
using namespace std;

bool  isArraySorted(int arr[], int n){
    if(n == 0 || n == 1)
        return true;
    for(int i =1;i<n;i++){
        if(arr[i-1] > arr[i])
            return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        if(isArraySorted(arr,n))
            cout<<"YES\n";
        else
            cout<<"No\n";
    }
    
    return 0;
}