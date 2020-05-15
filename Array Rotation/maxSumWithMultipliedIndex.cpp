// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int max_sum(int A[], int N);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        cout << max_sum(A, N) << endl;
    }
}

int max_sum(int A[], int N)
{
    int arrSum = 0, currVal = 0, i, j, k, maxVal;
    for (i = 0; i < N; i++)
    {
        arrSum = arrSum + A[i];
        currVal = currVal + i * A[i];
    }
    k = currVal;
    maxVal = k;
    for (i = 1; i < N; i++)
    {
        j = k + arrSum - N * A[N - i];
        if (j > maxVal)
        {
            maxVal = j;
        }
        k = j;
    }
    return maxVal;
}