#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    double d, pi = acos(-1);;
    cin >> d;
    cout << fixed << setprecision(20)  << pi * d * d / 4 << endl;

    return 0;
}

