#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int a, b;
    cin >> a >> b;
    cout << max(a, b) + max(max(a, b) - 1, min(a, b)) << endl;

    return 0;
}

