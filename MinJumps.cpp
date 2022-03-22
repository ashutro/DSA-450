// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
 
    int minJumps(int arr[], int n){
        // Your code here
            if(arr[0] == 0 && n > 1 ) return -1;
        if(n == 1 && arr[0] == 0) return 0;
         int Max = 0;
            int step = 0;
            int stop = 0;
            for(int i =0; i<n-1;i++){
                Max = max(Max,i+arr[i]);
                if(Max>=n-1){
                    step++;
                    return step;
                }
                if(i == stop){
                    stop = Max;
                    step++;
                }
            }
            if(stop>= n-1){
                return step;
            }
            return -1;
    }        
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
