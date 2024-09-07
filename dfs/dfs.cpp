#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];

void dfs(int src)
{
    cout << src << endl;
    vis[src] = true;

    // for (int i = 0; i < v[src].size(); i++)
    // {
    //     if (vis[v[src][i]] == false)
    //     {
    //         dfs(v[src][i]);
    //     }
    // }
    for (int child : v[src])
    {
        if (vis[child] == false)
        {
            dfs(child);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));

    int src;
    cin >> src;
    dfs(src);

    return 0;
}