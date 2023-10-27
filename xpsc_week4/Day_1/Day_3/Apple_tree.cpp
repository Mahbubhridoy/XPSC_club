#include<bits/stdc++.h>
using namespace std;
const int Max = 2*1e5;
vector<vector<long long>> graph;
vector<long long> level(Max);

void dfs(int vertex, int par)
{
     if(graph[vertex].size() == 1 && vertex != 1)
     {
         level[vertex] = 1;
     }

     for(auto child : graph[vertex])
     {
         if(child == par)
            continue;

         dfs(child, vertex);
         level[vertex] += level[child];
     }
}


int main()
{


    int test;
    cin >> test;

    while(test--)
    {
         int n;
         cin >> n;

         graph.assign(n+2, vector<long long>());
         for(int i = 0; i < n-1; i++)
         {
             int x, y;
             cin >> x >> y;
             graph[x].push_back(y);
             graph[y].push_back(x);
         }

         level.assign(n+2, 0);
         dfs(1, 0);

         int q;
         cin >> q;

         while(q--)
         {
             int l, r;
             cin >> l >> r;

             long long ans = level[l] * level[r];

             cout << ans << "\n";
         }



    }



    return 0;

}
