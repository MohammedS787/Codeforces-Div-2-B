#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define loop(i, n) for (int i = 0; (int)i < n; i++)
#define vloop(v) for (auto it = v.begin(); it != v.end(); it++)
#define vi vector<int>
#define vs vector<string>
#define range(v) (v.begin(), v.end())
#define io                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
//-----------------------------------------------------------------------//

int main()
{
    io int n, b;
    cin >> n >> b;
    vi v;
    loop(i, n)
    {
        int var;
        cin >> var;
        v.push_back(var);
    }
    vi array;
    int sumEven = 0, sumOdd = 0;
    loop(i, n)
    {
        if (v[i] % 2 == 0)
            sumEven++;
        else
            sumOdd++;
        if (sumEven == sumOdd && i != n - 1)
            array.push_back(abs(v[i] - v[i + 1]));
    }
    sort range(array);
    int cnt = 0;
    loop(i, array.size())
    {
        if (b >= array[i])
        {
            b -= array[i];
            cnt++;
        }
        else
            break;
    }
    cout << cnt << endl;
}
