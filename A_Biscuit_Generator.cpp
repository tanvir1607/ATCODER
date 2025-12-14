#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int a, b, t;
    cin >> a >> b >> t;
    cout << (t / a) * b << endl;

    return 0;
}
