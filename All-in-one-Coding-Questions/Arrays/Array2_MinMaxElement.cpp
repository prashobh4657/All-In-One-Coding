#include <bits/stdc++.h>
using namespace std;

void minmax(vector<int> &a, int l, int r, int &mx, int &mn)
{
    if (l == r)
    {
        mx = mn = a[l];
        return;
    }
    int mid = l + (r - l) / 2;
    int mx1, mn1, mx2, mn2;
    mx1 = mx2 = INT_MIN;
    mn1 = mn2 = INT_MAX;
    minmax(a, l, mid, mx1, mn1);
    minmax(a, mid + 1, r, mx2, mn2);
    mx = max(mx1, mx2);
    mn = min(mn1, mn2);
}
void DAC_search(vector<int> &a, int &max, int &min)
{
    minmax(a, 0, a.size() - 1, max, min);
}
void linear_search(vector<int> &a, int &max, int &min)
{
    max = INT_MIN;
    min = INT_MAX;
    for (int i = 0; i < a.size(); i++)
    {
        if (max < a[i])
            max = a[i];
        if (min > a[i]) // Here  --> instead of just "if", if "else if" is used then it would be little better to reduce number of comparision;
            min = a[i];
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max, min;
    linear_search(a, max, min);
    cout << "Using Linear Search : " << endl;
    cout << "Maximum element is " << max << endl;
    cout << "Minimum element is " << min << endl;
    DAC_search(a, max, min); // Here number of comparision required : 1.5n - 2;
    cout << "Using Divide and Conquer : " << endl;
    cout << "Maximum element is " << max << endl;
    cout << "Minimum element is " << min << endl;

    return 0;
}

/*
Alternate : //O(nlogn) Complexity
 ==> sort the array then Minimum element is a[0] and maximum element is a[n-1]
*/
// GFG Link : https://practice.geeksforgeeks.org/problems/max-min/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// ==> Just see latest submission (Using STL)