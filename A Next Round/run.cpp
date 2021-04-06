#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k, A[50];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    int rank;
    if (A[0] > 0)
        rank = 0;
    else
    {
        cout << "0" << endl;
        return;
    }
    int i = 1;
    int ans = 0;
    while (rank <= k)
    {
        ans++;
        if (A[i] == A[i - 1])
            continue;
        rank++;
    }
    cout << ans << endl;
}

int main()
{
    solve();
    return 0;
}