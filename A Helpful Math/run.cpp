#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int A[50];
    int index = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            A[index] = 1;
            index++;
        }
        if (s[i] == '2')
        {
            A[index] = 2;
            index++;
        }
        if (s[i] == '3')
        {
            A[index] = 3;
            index++;
        }
    }
    sort(A, A + index);
    for (int i = 0; i < index; i++)
    {
        cout << A[i];
        if (i != index - 1)
            cout << '+';
    }
}

int main()
{
    solve();
    return 0;
}