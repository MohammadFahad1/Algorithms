#include <bits/stdc++.h>
using namespace std;

int n, m;
char mat[1005][1005];
bool vis[1005][1005];
bool flag = false;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || mat[i][j] == '#')
        return false;
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) == true && vis[ci][cj] == false)
        {
            vis[ci][cj] = true;
            if (mat[ci][cj] == 'B')
            {
                flag = true;
                return;
            }
            if (mat[ci][cj] == '.')
            {
                dfs(ci, cj);
            }
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    int si = -1, sj = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
        }
    }

    dfs(si, sj);

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}