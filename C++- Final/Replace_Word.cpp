#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s, x;
        cin >> s >> x;
        int a = s.find(x);
        while (s.find(x) != -1)
        {
            s.replace(a, x.size(), "#");
            a = s.find(x);
        }
        cout << s << endl;
    }
    return 0;
}
