#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
bool vis[N];

bool bfs(int src, int target)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        if (front == target)
            return true;

        if (front * 2 < N && !vis[front * 2])
        {
            q.push(front * 2);
            vis[front * 2] = true;
        }
        if (front + 3 < N && !vis[front + 3])
        {
            q.push(front + 3);
            vis[front + 3] = true;
        }
    }

    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(vis, false, sizeof(vis));

        int x;
        cin >> x;
        if (bfs(1, x))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
