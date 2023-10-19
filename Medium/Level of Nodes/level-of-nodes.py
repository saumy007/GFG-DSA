#User function Template for python3

class Solution:
    
    #Function to find the level of node X.
    def nodeLevel(self, V, adj, X):
        if not V:
            return -1
        visited = [0]*V
        q = [[0,0]]
        visited[0] = 1
        while len(q):
            node,level = q.pop(0)
            if node==X:
                return level
            for ad in adj[node]:
                if visited[ad]==0:
                    visited[ad] = 1
                    q.append([ad,level+1])
        return -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        V,E = list(map(int, input().strip().split()))
        adj = [[] for i in range(V)]
        for i in range(E):
            a,b = map(int,input().strip().split())
            adj[a].append(b)
            adj[b].append(a)
        X=int(input())
        ob = Solution()
        
        print(ob.nodeLevel(V, adj, X))
# } Driver Code Ends