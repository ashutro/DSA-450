#include<iostream>
#define nline "\n"

using namespace std;
int countOne(int n ){
    int cnt = 0;
    while (n)
    {
        n = n & (n-1);
        cnt ++;
    }
    return cnt;
    
}
int main(){
    int n;
    cin>>n;
    cout<<countOne(n)<<nline;
    return 0;
}