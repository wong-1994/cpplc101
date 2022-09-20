#include <iostream>
using namespace std;

double npower(double x, int n)
{
    double val = 1.0;
    while (n--)
        val *= x;
    return val;
}

double bte(int b)
{
    int p = 9;
    double res = 0;
    while (--p)
    {
        res += (b % 10) * npower(2, (8 - p));
        b = (int)(b / 10);
    }

    return res;
}

int main()
{
    double ans;
    ans = bte(1101);
    cout << ans << endl;
}