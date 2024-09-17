#include <bits/stdc++.h>
using namespace std;

bool vis[100][100];
int dis[100][100];
vector<pair<int, int>> d = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

bool valid(int i, int j, int n, int m)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}

void bfs(int si, int sj, int n, int m)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;

            if (valid(ci, cj, n, m) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int si, sj, di, dj;
        cin >> si >> sj;
        cin >> di >> dj;

        memset(vis, false, sizeof(vis));
        memset(dis, -1, sizeof(dis));

        bfs(si, sj, n, m);

        cout << dis[di][dj] << endl;
    }

    return 0;
}
