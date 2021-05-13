#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define loop(i, n) for (int i = 0; (int)i < n; i++)
#define vi vector<int>
#define range(v) (v.begin(), v.end())
#define io                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
//---------------------------------------------------------//

int main(void)
{
    io int n;
    cin >> n;
    string str[n + 1];
    map<string, bool> mp;
    loop(i, n)
    {
        cin >> str[i];
    }
    for (int i = n - 1; i >= 0; i--)
        if (mp[str[i]] != 1)
        {
            cout << str[i] << endl;
            mp[str[i]] = 1;
        }
}
