#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n, e;
    cin >> n >> e;
    int mat[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = 0;
        }
    }

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
    }

    long int q;
    cin >> q;
    while (q--)
    {
        long int a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << "YES" << endl;
        }
        else if (mat[a][b] == 1)
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