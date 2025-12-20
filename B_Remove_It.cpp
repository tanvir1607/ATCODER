#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int size, num;
    cin >> size >> num;
    while (size--)
    {
        int x;
        cin >> x;
        if (x != num) cout << x << " ";
    }
    cout << endl;

    return 0;
}





// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// #define endl '\n'
// #define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

// int main() 
// {
//     optimize();

//     int size, num;
//     cin >> size >> num;

//     vector<int> vec(size);
//     for (int &x : vec) cin >> x;

//     vec.erase(remove(vec.begin(), vec.end(), num), vec.end());
//     for (int x : vec) cout << x << " ";
//     return 0;
// }
