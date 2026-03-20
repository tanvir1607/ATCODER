#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int a, b, c;
    cin >> a >> b >> c;
    int ans = a % c ? a + c - a % c : a;
    cout << (a <= ans && ans <= b ? ans : -1) << endl;

    return 0;
}

