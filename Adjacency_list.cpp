#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> mat[n];

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a); // If graph is a directed graph then we must avoid this line
    }

    for (int i = 0; i < mat[4].size(); i++)
    {
        // Checking the connections of 4
        cout << 4 << " " << mat[4][i] << endl;
    }

    /* // Alternative way of checking the connections
    for (int x : mat[4])
    {
        cout << x << " ";
    } */

    return 0;
}