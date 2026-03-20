#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int size, x;
    cin >> size >> x;
    vector<int> vec(size);
    for (int &num : vec) 
    {
        cin >> num;
        if (num != x) cout << num << " ";
    }
    cout << endl;
    
    return 0;
}

