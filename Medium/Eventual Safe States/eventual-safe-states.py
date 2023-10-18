#User function Template for python3

#User function Template for python3

from typing import List


class Solution:
    def dfs(self,i,adj,vis,safe):
        #code here
        if safe[i]:
            return True
        if vis[i]:
            return False
        vis[i]=True
        issafe = True
        for edge in adj[i]:
            issafe &=self.dfs(edge,adj,vis,safe)
            
        safe[i]=issafe
        return issafe
        
    def eventualSafeNodes(self,V,adj):
        safe=[False]* V
        vis=[False]* V
        
        for i in range(V):
            if not vis[i]:
                self.dfs(i,adj,vis,safe)
                
        out=[i for i in range(V) if safe[i]]
        
        return out        # code here



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=="__main__":
    T = int(input())
    for t in range(T):
        
        V, E = map(int, input().strip().split())
        adj = [[] for i in range(V)]
        for i in range(E):
            u, v = map(int, input().strip().split())
            adj[u].append(v)
        obj = Solution()
        ans = obj.eventualSafeNodes(V, adj)
        for nodes in ans:
            print(nodes, end = ' ')
        print()
            


# } Driver Code Ends