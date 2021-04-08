#include <bits/stdc++.h>

using namespace std;

void operation(int &a)
{
    string s;
    cin >> s;
    if (s == "++X" || s == "X++")
        a++;
    else if (s == "--X" || s == "X--")
        a--;
}

int main()
{
    int a = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++)
        operation(a);
    cout << a << endl;
    return 0;
}