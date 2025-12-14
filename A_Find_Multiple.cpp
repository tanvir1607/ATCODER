#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int lower, upper, x;
    cin >> lower >> upper >> x;

    int firstMul = lower % x ? lower + (x - lower % x) : lower;
    cout << (firstMul <= upper ? firstMul : -1) << endl;

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

//     int lower, upper, x;
//     cin >> lower >> upper >> x;

//     bool found = false;
//     for (int i = lower; i <= upper && !found; i++)
//         if (i % x == 0) found = true, cout << i << endl;

//     if (!found) cout << -1 << endl;

//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// #define endl '\n'
// #define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

// int main() 
// {
//     optimize();

//     int lower, upper, x;
//     cin >> lower >> upper >> x;

//     int ans = -1;
//     for (int i = lower; i <= upper && ans == -1; i++)
//         if (i % x == 0) ans = i;
//     cout << ans << endl;

//     return 0;
// }
