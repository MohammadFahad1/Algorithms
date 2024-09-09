#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> arr[N];

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;

        vector<int> v;
        int sz = arr[x].size();

        for (int i = 0; i < sz; i++)
        {
            v.push_back(arr[x][i]);
        }

        sort(v.begin(), v.end(), greater<int>());

        if (v.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            for (int child : v)
            {
                cout << child << " ";
            }
            cout << endl;
        }
    }

    return 0;
}