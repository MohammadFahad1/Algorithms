#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool vis[1005];

void bfs(int src, int des)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    vis[src] = true;
    bool paisi = false;

    while (!q.empty())
    {
        pair<int, int> front = q.front();
        q.pop();

        // cout << front.first << endl;

        if (front.first == des)
        {
            cout << front.second << endl;
            paisi = true;
        }
        for (int child : v[front.first])
        {
            if (!vis[child])
            {
                q.push({child, front.second + 1});
                vis[child] = true;
            }
        }
    }
    if (paisi == false)
    {
        cout << -1 << endl;
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
    bfs(src, 4);

    return 0;
}