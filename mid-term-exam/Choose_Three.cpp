#include <bits/stdc++.h>
using namespace std;
int choose_Three(int a[], int n, int s)
{
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[i] + a[j] + a[k] == s)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        if (choose_Three(a, n, s))
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

