// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
       unordered_set<int> ans;
        
        for(int i=0; i<n; i++){
            ans.insert(a[i]);
        }
        
        for(int i=0;i<m;i++){
            ans.insert(b[i]);
        }
        return ans.size();
    }
};


// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];

	    for(int i = 0;i<n;i++)
	       {
	      cout<<i<<endl; cin >> b[i];}
	       
	    for(int i = 0;i<m;i++){
	      cout<<i<<endl; cin >> b[i];}
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
} 
 