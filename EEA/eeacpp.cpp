// Extended Euclidian Algorithm
// a*x + b*y = gcd(a, b)

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll extended(ll a, ll b, ll &x, ll &y)
{

    // base case x = 1, y = 0 when b = 0
    if (b == 0)
    {
        x = 1;
        y = 0;
        cout << "extended(" << a << ",\t" << b << ",\t"
             << "x=" << x << ",\t"
             << "y=" << y << ")" << endl;

        // return the gcd of the base case which is a
        return a;
    }

    // swaping a and b with ***their*** x and y ((a, x), (b, y))
    cout << "extended(" << b << ",\t" << a % b << ",\t"
         << "x=" << x << ",\t"
         << "y=" << y << ")" << endl;
    ll gcd = extended(b, a % b, y, x);

    // now our x equals the past y and y equals the past x
    // which means:
    // x = prev_Y
    // y = prev_X
    // and to get our present y we get
    // y = prev_X - (a / b) * prev_Y = y - (a / b) * x
    // so y -= (a / b) * x
    y -= (a / b) * x;

    cout << "extended(" << a << ",\t" << b << ",\t"
         << "x=" << x << ",\t"
         << "y=" << y << ")" << endl;
    return gcd;
}

// code driver
int main()
{
    ll a, b, x = 99, y = 99, gcd = 0;
    a = 3;
    b = 4;
    cin >> a >> b;

    ll p = extended(a, b, x, y);
    cout << endl
         << "GCD(" << a << ", " << b << ") = " << p << endl;
    cout << "= (" << x << ") * a + (" << y << ") * b";

    return 0;
}