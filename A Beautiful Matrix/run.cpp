#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int A[6][6];
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
            cin >> A[i][j];
    int a, b;
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
            if (A[i][j] == 1)
            {
                a = i;
                b = j;
            }
    int ans = abs(a - 3) + abs(b - 3);
    cout << ans << endl;
}

int main()
{
    solve();
    return 0;
}