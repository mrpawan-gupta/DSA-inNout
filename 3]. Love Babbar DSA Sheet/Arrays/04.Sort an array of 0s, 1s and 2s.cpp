#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void swap(int a[], int i, int j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    void sort012(int a[], int n)
    {
        int low = 0;
        int mid = 0;
        int high = n - 1;

        while (mid <= high)
        {
            if (a[mid] == 0)
            {
                swap(a, low, mid);
                low++;
                mid++;
            }
            else if (a[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(a, mid, high);
                high--;
            }
        }
    }
};

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution Object;
        Object.sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

