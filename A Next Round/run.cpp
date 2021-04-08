#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k, A[51];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    int ans = 0;
    for (int i = 0; i < n; i++)
        if (A[i] > 0 && A[i] >= A[k - 1])
            ans++;
    cout << ans;
}

int main()
{
    solve();
    return 0;
}