#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const int N = 1e5 + 5;
long long int dis[N];
bool r[N];

int main()
{
    int n, e;
    cin >> n >> e;

    vector<Edge> EdgeList;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
        r[i] = false;
    }

    int src;
    cin >> src;
    dis[src] = 0;
    r[src] = true;

    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed : EdgeList)
        {
            int u = ed.u;
            int v = ed.v;
            int c = ed.c;
            if (r[u] && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
                r[v] = true;
            }
        }
    }

    for (Edge ed : EdgeList)
    {
        int u = ed.u;
        int v = ed.v;
        int c = ed.c;
        if (r[u] && dis[u] + c < dis[v])
        {
            cout << "Negative Cycle Detected" << endl;
            return 0;
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int dest;
        cin >> dest;
        if (!r[dest])
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dis[dest] << endl;
        }
    }

    return 0;
}
