#include <iostream>
using namespace std;

int main()
{
    int k, l, m, n, d, a = 0;
    cin >> k >> l >> m >> n >> d;

    if (d / k == d || d / l == d || d / m == d || d / n == d)
    {
        cout << d;
    }
    else
    {
        for (int i = 1; i <= d; i++)
        {
            if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            {
                a++;
            }
        }
        cout << a;
    }

    return 0;
}
