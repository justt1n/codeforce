#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, A[1000][3];
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            cin >> A[i][j];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
            sum += A[i][j];
        if (sum >= 2)
            ans++;
    }
    cout << ans << endl;
}

int main()
{
    solve();
    return 0;
}