//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   long long int mod =1e9+7; 
    
    long long f(int n, vector<long long int > &dp){
        if(n<=1){
            
            return n;
            
        }
        
        if(dp[n] != -1){
            
            return dp[n];
        }
        
        return dp[n] = (f(n-1, dp) + f(n-2, dp))%mod;
        
    }
    
    
    
    
    long long topDown(int n) {
        // code here
        if(n<1) return n;
    vector <long long int > dp(n+1,-1);
    return f(n,dp);
            
       
        
        
    }
        int solve (long long int n,  vector<long long int> &dp){
         if(n==0 or n==1){
            return n;
        }
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i] = (dp[i-1] + dp[i-2])%mod;
            
        }
        return dp[n];
     }
    
    
    int solve_spaceoptimze(long long int n){
        if(n<=1){
            return n;
        }
        
        int prev2=0;
        int prev1=1;
        int curr= 1;
        
        for(int i=2;i<=n;i++){
            curr = (prev1+prev2)%mod;
            prev2=prev1;
            prev1=curr;
            
        }
        return curr;
    }
    
    long long int bottomUp(int n) {
        // Tabulation approach
        
        if(n<1){
            return n;
        }
        vector<long long int> dp(n+1);
        
        // return solve(n,dp);
        return solve_spaceoptimze(n);

        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans) cout << -1 << "\n";
        cout << topDownans << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends