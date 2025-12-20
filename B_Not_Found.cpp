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

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        if (str.find(ch) == string::npos)
        {
            cout << ch << endl;
            return 0;
        } 
    }
    cout << "None" << endl;

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

//     string str;
//     cin >> str;

//     set<char> Set(str.begin(), str.end());
//     for (char ch = 'a'; ch <= 'z'; ch++)
//     {
//         if (!Set.count(ch))
//         {
//             cout << ch << endl;
//             return 0;
//         } 
//     }
//     cout << "None" << endl;

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

//     string str;
//     cin >> str;

//     set<char> Set(str.begin(), str.end());
//     for (char ch = 'a'; ch <= 'z'; ch++)
//     {
//         if (Set.find(ch) == Set.end())
//         {
//             cout << ch << endl;
//             return 0;
//         } 
//     }
//     cout << "None" << endl;

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

//     string str;
//     cin >> str;

//     map<char, bool> Map;
//     for (char ch : str) Map[ch] = true;
//     for (char ch = 'a'; ch <= 'z'; ch++)
//     {
//         if (!Map[ch])
//         {
//             cout << ch << endl;
//             return 0;
//         } 
//     }
//     cout << "None" << endl;

//     return 0;
// }

