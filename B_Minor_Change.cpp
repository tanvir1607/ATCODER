#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    string s, t;
    cin >> s >> t;

    int len = s.size();
    int cnt = 0;
    for (int i = 0; i < len; i++)
        if (s[i] != t[i]) cnt++;
    cout << cnt << endl;

    return 0;
}

