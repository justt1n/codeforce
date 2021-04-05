#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int w;
    cin >> w;
    for (int i = 2; i < w; i += 2)
        if ((w - 2) % 2 == 0)
        {
            cout << "YES";
            return;
        }
    cout << "NO";
}

int main()
{
    solve();
    return 0;
}