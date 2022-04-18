#include<iostream>
using namespace std;
#define nline "\n"
int getbit(int n, int pos){
    return ((n & (1<<pos)) != 0) ;
}
int setbit(int n , int pos){
    return  (n | (1<<pos)) ;
}
int clearbit(int n, int pos){
    int negi = ~(1<<pos);

    return (n & negi);
}
int updatebit(int n , int pos, int val){
    int negi = ~(1<<pos);

      n = n & negi;

      return (n | (val<<pos));
}
int main(){
    int n,pos,val;
    cin>>n>>pos;
    cout<<getbit(n,pos)<<nline;
    cout<<setbit(n,pos)<<nline;
    cout<<clearbit(n,pos)<<nline;
    cin>>val;
    cout<<updatebit(n,pos,val)<<nline;

}