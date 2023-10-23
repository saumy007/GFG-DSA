#User function Template for python3
class Solution:
	def maxSumIS(self, Arr, n):
		# code here
        s=list(Arr)
        
        for i in range(1,n):
            
            for j in range(i):
                if Arr[i]>Arr[j] and s[i]<Arr[i]+s[j]:
                    s[i]=Arr[i]+s[j]
                    
        m=0
        for i in s:
            if i>m:
                m=i
        return m

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		Arr = [int(x) for x in input().split()]
		ob = Solution()
		ans = ob.maxSumIS(Arr,n)
		print(ans)

# } Driver Code Ends