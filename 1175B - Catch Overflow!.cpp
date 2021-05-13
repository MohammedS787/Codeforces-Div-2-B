#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

long long min(long long a, long long b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main()
{
    const long long max = 4294967296;
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    cin >> n;
    long long x = 0;
    stack<long long> st;
    st.push(1);
    string str;
    for (int i = 0, num; i < n; i++)
    {
        cin >> str;
        if (str == "add")
            x += st.top();
        else if (str == "for")
        {
            cin >> num;
            st.push(min(max, num * st.top()));
        }
        else if (str == "end")
        {
            st.pop();
        }
    }
    if (x >= max)
        cout << "OVERFLOW!!!" << endl;
    else
        cout << x << endl;
}
