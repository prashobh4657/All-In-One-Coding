#include <bits/stdc++.h>
using namespace std;

void reverse_recursive(int l, int r, vector<int> &a)
{
    if (l > r)
        return;
    swap(a[l], a[r]);
    reverse_recursive(l + 1, r - 1, a);
}
void reverse_iterative(vector<int> &a)
{
    int i = 0, j = a.size() - 1;
    int temp;
    for (i = 0; i < j; i++, j--) // also directly swap(a[i],a[j]) can be used;
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    reverse_iterative(a);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    reverse_recursive(0, n - 1, a);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}

/*
Here in reverse_recursive() function last two lines can be swapped (Line 8,9); (Either you make call first or swap(a[l],a[r]);
This condition is important here if you put i<n then it will reverse twice and you will get same array;
Just put i<j;

Confusion between i<j or i<=j
To remeber whether equality hold or not  just test it immediately for n=odd and even for both and it will work fine when you put i<j;
Also here i<j and i<=j both will work. But i<j is little better because in i<=j last swap will be extra when n=odd : Just dry run for n=4 and n=5
*/