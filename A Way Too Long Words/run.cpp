#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a;
    cin >> a;
    if (a.length() <= 10)
        cout << a << endl;
    else
        cout << a[0] << a.length() - 2 << a[a.length() - 1] << endl;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        solve();
    return 0;
}