// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
      sort(arr,arr+n);
      int Max = 0;
      int Min = 0;
      int res = Max - Min;
    
      for(int i =1;i<n;i++){
          Max = max(arr[i-1]+k,arr[n-1]+k);
          Min = min(arr[i]-k,arr[0]+k);
          res = min(res,Max-Min);
      }
      return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  