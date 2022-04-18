#include<iostream>
#define nline "\n"

using namespace std;

int Unique(int arr[], int n){
    int Xor = 0;
    for(int i = 0; i < n ; i++){
        Xor = Xor ^ arr[i];
    }
    return Xor;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    cout<<Unique(arr, n)<<nline;

}