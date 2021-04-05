#include <iostream>
using namespace std;

int main()
{
    int n, i, p[3000], so[3000];
    cin >> n;
    n *= 2;
    for (i = 0; i < n; i++)
    {
        cin >> p[i];
        so[i] = i + 1;
    }
    int ind = 0, ans = n, k = 0;
    //cout << ans;
    for (int cnt = 0; cnt < n; cnt++)
    {
        for (i = 0; i < n; i++)
        {
            if (so[i] != p[i])
                break;
        }
        if (i == n)
        {
            ans = min(ans, min(cnt, n - cnt));
            k = 1;
        }
        if (ind == 1)
        {
            for (i = 0; i < n; i += 2)
                swap(so[i], so[i + 1]);
        }
        else
        {
            for (i = 0; i < n / 2; i++)
                swap(so[i], so[i + n / 2]);
        }
        ind = 1 - ind;
    }
    if (k == 0)
        cout << -1;
    else
        cout << ans;
}
