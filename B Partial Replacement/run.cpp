#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int k, n;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans = 1;
    int firstX = 0, lastX = n;
    while (s[firstX] != '*')
        firstX++;
    while (s[lastX] != '*')
        lastX--;
    for (int i = firstX; i < lastX; i += k)
    {
        while (s[i] == '.')
            i--;
        ans++;
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}