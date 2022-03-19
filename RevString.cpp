#include<bits/stdc++.h>

using namespace std;
string Rev(string& str){
    int n = str.length();
    for(int i =0; i < n/2;i++){
        swap(str[i],str[n-i-1]);
    }
    return str;
}
int main(){
    string str;

    getline(cin,str);

    Rev(str);
    cout<<str;
}