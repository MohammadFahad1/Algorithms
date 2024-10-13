#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long int> h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        int ai = 0, aj = n - 1;
        int left = 0, right = n - 1;

        while (left < right)
        {
            if (h[left] > h[ai])
            {
                ai = left;
            }
            if (h[right] > h[aj])
            {
                aj = right;
            }

            if (h[left] < h[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        cout << ai << " " << aj << endl;
    }
    return 0;
}
