#include <iostream>
using namespace std;

long long modularExponentiation(long long x, long long n, long long m)
{
    long long ans = 1;

    while (n > 0)
    {
        // Agar exponent odd hai
        if (n & 1)
        {
            ans = (ans * x) % m;
        }

        // Base ka square karo
        x = (x * x) % m;

        // Exponent ko 2 se divide karo
        n = n >> 1;
    }

    return ans;
}

int main()
{
    long long x, n, m;

    cout << "Enter Base: ";
    cin >> x;

    cout << "Enter Power: ";
    cin >> n;

    cout << "Enter Modulus: ";
    cin >> m;

    cout << "Answer = " << modularExponentiation(x, n, m);

    return 0;
}