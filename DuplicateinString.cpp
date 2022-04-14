#include<bits/stdc++.h>
using namespace std;

void DupInputs(string str){
    map<char,int> mp;
    for(int i = 0; i < str.length();i++){
        mp[str[i]]++;
    }

    for(auto itr : mp){
        if(itr.second > 1){
            cout<<itr.first<<" = "<<itr.second<<'\n';
        }
    }
}
int main(){
    string str;
    getline(cin,str);
    str.erase(std::remove_if(str.begin(), str.end(), ::isspace), str.end());
    DupInputs(str);

    return 0;
}