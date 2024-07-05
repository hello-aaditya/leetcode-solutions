class Solution {
public:

bool isCycleDfs(unordered_map<int, vector<int>>& adj, int u, vector<bool>& visited, vector<bool>& inRecursion)
{
    visited[u] = true;
    inRecursion[u] = true;

    for(int v : adj[u])
    {
        if(visited[v] && inRecursion[v])
        {
            return true;
        }
        else if(!visited[v] && isCycleDfs(adj, v, visited, inRecursion))
        {
            return true;
        }
    }
    inRecursion[u] = false;
    return false;
}

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<bool> visited(numCourses, false);
        vector<bool> inRecursion(numCourses, false);

        unordered_map<int, vector<int>> adj;

        for(auto vec : prerequisites)
        {
            int a = vec[0];
            int b = vec[1];

            //b----->a
            adj[b].push_back(a);
        }

        for(int i=0; i<numCourses; i++)
        {
            if(!visited[i] && isCycleDfs(adj, i, visited, inRecursion))
            {
                return false;
            }
        }
        return true;

    }
};