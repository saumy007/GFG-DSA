//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	bool fascinating(int n) {
	    string a = to_string(n*2);
	    string b = to_string(n*3);
	    string c = to_string(n);
	    string s =a+b+c;
	    string z ="123456789";
	    sort(s.begin(),s.end());
	    
	    if(s==z){
	        return 1;
	    }
	    else{
	       return 0; 
	    }
	    return 0;
	    
	    
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n);
        if (ans) {
            cout << "Fascinating\n";
        } else {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
}
// } Driver Code Ends