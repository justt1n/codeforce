#include <stdio.h>
// cong thuc gia tri hang x = i*n + j + 1
// cong thuc gia tri cot x = i + j*m + 1

/*
Tim vi tri tu ma tran hang
    x = i*m + j + 1
<=> x - 1 = i*m + j
<=> i = (x - 1)/m
    j = (x - 1)%m
*/

/*
Tim vi tri tu ma tran cot
    x = j*m + i + 1
<=> x - 1 = j*m + i
<=> j = (x - 1)/m
    i = (x - 1)%m
*/

void solve()
{
    long long int m, n, x;
    scanf("%lld%lld%lld", &m, &n, &x);
    long long int i, j;
    i = (x - 1) / m;
    j = (x - 1) % m;
    long long int result = j * n + i + 1;
    printf("%lld\n", result);
}

int main()
{
    int k;
    scanf("%d", &k);
    for (int it = 1; it <= k; it++)
    {
        solve();
    }
    return 0;
}