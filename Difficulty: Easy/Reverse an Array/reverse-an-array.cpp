//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public: 
    
    
 void find(vector<int> &arr, int i, int s) {
    if (i >= s / 2)  // Base case: Stop when we reach the middle
        return;
    
    swap(arr[i], arr[s - i - 1]);  // Swap elements
    
    find(arr, i + 1, s);  // Recursive call for next index
}
    
void reverseArray(vector<int> &arr) {
    int s = arr.size();
    find(arr, 0, s);  // Start recursion from index 0
}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.reverseArray(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends