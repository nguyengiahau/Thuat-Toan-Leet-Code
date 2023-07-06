#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
void printVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}
vector<int> megreSort(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> res;
    int n = nums1.size();
    int m = nums2.size();
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (nums1[i] < nums2[j])
            res.push_back(nums1[i]), i++;
        else
            res.push_back(nums2[j]), j++;
    }
    while (i < n)
    {
        res.push_back(nums1[i]);
        i++;
    }
    while (j < m)
    {
        res.push_back(nums2[j]);
        j++;
    }
    return res;
}
double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> temp = megreSort(nums1, nums2);
    printVector(temp);
    int n = temp.size();
    if (n % 2 != 0)
        return temp[(n - 1) / 2];
    return 1.0 * (temp[n / 2] + temp[(n / 2) - 1]) / 2;
}
int main()
{
    // cout << "Hello world" << endl;

    int n, m;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    vector<int> b(m, 0);
    for (int i = 0; i < m; i++)
        cin >> b[i];
    cout << fixed << setprecision(5) << findMedianSortedArrays(a, b);
}