// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
         S+=".";
        stack<string>stack;
        string temp="";

        for(int i=0;i<S.size();i++){
            if(S[i]=='.'){
                stack.push(temp);
                temp="";
             }else
                temp=temp+S[i];
        }
        string str="";
        while(stack.size()!=1){
            str=str+stack.top()+".";
            stack.pop();
        }
        str=str+stack.top();
        return str;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends