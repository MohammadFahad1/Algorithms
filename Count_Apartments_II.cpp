#include <bits/stdc++.h>
using namespace std;

int n, m;
char mat[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int roomCount;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || mat[i][j] == '#' || vis[i][j])
        return false;
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    roomCount++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj))
        {
            dfs(ci, cj);
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
    vector<int> apartmentRooms;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == '.' && !vis[i][j])
            {
                roomCount = 0;
                dfs(i, j);
                apartmentRooms.push_back(roomCount);
            }
        }
    }

    if (apartmentRooms.empty())
    {
        cout << 0 << endl;
    }
    else
    {
        sort(apartmentRooms.begin(), apartmentRooms.end());
        for (int room : apartmentRooms)
        {
            cout << room << " ";
        }
        cout << endl;
    }

    return 0;
}
