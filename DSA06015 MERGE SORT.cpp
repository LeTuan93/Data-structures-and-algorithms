#include <bits/stdc++.h>
using namespace std;
int a[100005];
int n;

void merge(int left, int mid, int right)
{
    int i = left, j = mid + 1, k = left;
    int temp[100005];

    while (i <= mid && j <= right)
    {
        if (a[i] <= a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];
    while (j <= right)
        temp[k++] = a[j++];

    for (int i = left; i <= right; i++)
    {
        a[i] = temp[i];
    }
}

void mergeSort(int left, int right)
{
    if (left >= right)
        return;
    int mid = left + (right - left) / 2;
    mergeSort(left, mid);
    mergeSort(mid + 1, right);
    merge(left, mid, right);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int cnt = 0;

        for (int i = 0; i < n; i++)
            cin >> a[i];

        mergeSort(0, n - 1);

        for (int i = 0; i < n; i++)
            cout << a[i] << ' ';
        cout << endl;
    }
}
