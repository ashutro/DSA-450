#include<iostream>
using namespace std;

#define nline "\n"
int ecluidGCD(int x, int y){
    while (y != 0)
    {
        int rem = x%y;
         x = y;
         y = rem;
    }
    return  x;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<ecluidGCD(a,b)<<nline;
    return 0;
}