

#include
<bits/stdc++.h>



using namespace
std;



 



const int N = 1e5
+ 2;



 



bool dfs(int
source, int dest, vector<int> adj[], vector<int> &visited)



{



    visited[source] = 1;



    if (source == dest)



        return true;



 



    for (auto i : adj[source])



    {



        if (visited[i] == 0 && dfs(i,
dest, adj, visited))



            return true;



    }



    return false;



}



int main()



{



    int n, m;



    cin >> n >> m;



    int x, y;



 



    vector<int> visited(N, 0);



    vector<int> adj[N];



 



    for (int i = 0; i < n; i++)



    {



        cin >> x >> y;



 



        // directed



        // 
adj[x].push_back(y);



 



        // undirected



        adj[x].push_back(y);



        adj[y].push_back(x);



    }



 



    int source, dest;



    cout << "Enter the source and
dest ";



    cin >> source >> dest;



    if (dfs(source, dest, adj, visited))



    {



        cout << "Path_exist";



    }



    else



    {



        cout << "path not
exsist";



    }



}



