#include<iostream>
using namespace std;
#define nline "\n"
int divi(int n, int a, int b){
    int c1 = n/a;
    int c2 = n/b;

    int c3 = n/(a*b);
    
    return c1+c2 -c3;
}
int main(){
    int n,a,b;
    cin>>n>>a>>b;

    cout<<divi(n,a,b)<<nline;
    return 0;
}