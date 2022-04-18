#include<iostream>
#define nline "\n"
using namespace std;
bool isPower(int n){
    return (n && !(n & n-1));
}
int main(){
    int n;
    cin>>n;
    if(isPower(n)){
        cout<<"Yes"<<nline;
    }
    else cout<<"No"<<nline;
    return 0;

}