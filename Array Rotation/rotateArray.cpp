#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long int n, d;
        cin >> n >> d;
        long long int arr[n];
        long long int g;
        g = gcd(n, d);
        long long int rt = n / g;
        long long int i, j, k, temp;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < g; i++)
        {
            temp = arr[i];
            j = i;
            while (1)
            {
                k = j + d;
                if (k >= n)
                {
                    k = k % n;
                }
                if (k == i)
                {
                    break;
                }
                arr[j] = arr[k];
                j = k;
            }
            arr[j] = temp;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}