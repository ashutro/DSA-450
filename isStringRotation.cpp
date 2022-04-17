#include<bits/stdc++.h>
using namespace std;

bool isRotationForm(string& s1 , string& s2){
    if(s1.length() != s2.length()) return false;

    string temp;

    temp = s1+s1;
    return(temp.find(s2) != string::npos);
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
        if(isRotationForm(s1,s2)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}