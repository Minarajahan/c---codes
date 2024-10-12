#include <bits/stdc++.h>
using namespace std;

int* sort_it(int n) {
    // assending order
    int *a = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());

    return a;
}
int main() {
    int n;
    cin >> n;
    // decending order

    int *sortArray = sort_it(n);
    for (int i = 0; i < n; ++i) {
        cout << sortArray[i] << " ";
    }
    delete[] sortArray;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n;
//     int *a= new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     cin >> m;
//     int *b = new int [m];
//     for (int i = 0; i < n; i++)
//     {
//         b[i] = a[i];
//     }
//     delete[] a;
//     for (int i = n; i < m; i++)
//     {
//         cin >> b[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cout << b[i]<<" ";
//     }
//     return 0;
// }