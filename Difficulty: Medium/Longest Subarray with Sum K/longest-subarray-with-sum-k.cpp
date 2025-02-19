//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        long long int sum = 0;
        int maxLen=0;
        map<long long , int> hash;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            
            if(sum==k){
                maxLen = i+1;
            }
            
            // most important part of this algo
            long long int rem = sum-k;
            if(hash.find(rem) != hash.end()){
                maxLen = max(maxLen,i-hash[rem]);
            }
            
            //if we have zeros or negatives we will not update the sum index
            if(hash.find(sum) == hash.end())
            hash[sum]=i;
        }   
       
       
        return maxLen;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends