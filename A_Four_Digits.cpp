#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    string str;
    cin >> str;
    cout << string(4 - str.size(), '0') << str << endl;

    return 0;
}

