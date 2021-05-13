#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    string str;
    cin >> str;
    stack<char> var;
    int c = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
            var.push('(');
        else if (!var.empty())
            var.pop(), c += 2;
    }
    cout << c << endl;
}
