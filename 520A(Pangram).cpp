#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<n; i++)
    {
        s[i] = towlower(s[i]);
    }

    sort(s.begin(), s.end());
    for (int i = 0; i < n; i++)
    {

        if (s[i] != s[i + 1])
        {
            b++;

        }
    }

    if(b==26)
        cout<<"YES";
    else
        cout << "NO";
    return 0;
}
