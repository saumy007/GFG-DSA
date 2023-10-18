//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
      int isPrime(int N){
        // code here
        bool flag = false;
        if(N == 1)
            return 0;
        if(N == 2)
            return 1;
        for(int i = 2; i <= sqrt(N); i++)
            if(N % i == 0)
                flag = true;
        if(flag)
            return 0;  
        else
            return 1;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends