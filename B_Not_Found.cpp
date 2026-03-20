#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    string str;
    cin >> str;

    map<char, int> freq;
    for (char ch : str) freq[ch]++;

    string ans = "None";
    for (char ch = 'a'; ch <= 'z'; ch++)
        if (freq[ch] == 0)
        {
            ans = ch;
            break;
        }
    cout << ans << endl;

    return 0;
}
