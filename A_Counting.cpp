#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int lower, upper;
    cin >> lower >> upper;

    // int ans = 0;
    // for (int i = lower; i <= upper; i++)
    //     ans++;
    // cout << ans << endl;
    cout << (upper >= lower ? upper - lower + 1 : 0) << endl;

    return 0;
}

