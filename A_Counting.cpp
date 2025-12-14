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
    cout << (upper >= lower ? upper - lower + 1 : 0) << endl;

    return 0;
}

