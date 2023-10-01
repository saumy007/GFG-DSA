//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    printPat(n);
    cout<<endl;
	}
}
// } Driver Code Ends


/*You are required to complete this method*/
void printPat(int n)
{
//Your code here
    //it run 3 times
    for(int i=n;i>0;i--){ 
        // it run 3 times
        for(int j=n;j>0;j--){
            // it run 3 times at first,then 2 times, atlast 1 time
            for(int k=0;k<i;k++){ 
               cout<<j<<" ";
           }
       }
       cout<<"$";
    }
}