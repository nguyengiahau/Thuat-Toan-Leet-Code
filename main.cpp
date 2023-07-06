#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
    long long n, m, ans = 0;
    cin >> n >> m;
    long long *arr = new long long[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    long long i = 0;
    while (arr[i] < 0 && i < n)
    {
        ans += abs(arr[i]) * 2;
        i += m;
    }
    i = n - 1;
    while (arr[i] > 0 && i > -1)
    {
        ans += abs(arr[i]) * 2;
        i -= m;
    }
    cout << ans;
}