// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// #define endl '\n'
// #define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

// int main() 
// {
//     optimize();

//     int lower, upper, num;
//     cin >> lower >> upper >> num;

//     int ans = -1;
//     for (int i = lower; i <= upper && ans == -1; i++)
//         if (i % num == 0) ans = i;
//     cout << ans << endl;

//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int lower, upper, num;
    cin >> lower >> upper >> num;

    int firstMul = lower % num ? lower + (num - lower % num) : lower;
    cout << (firstMul <= upper ? firstMul : -1) << endl;

    return 0;
}