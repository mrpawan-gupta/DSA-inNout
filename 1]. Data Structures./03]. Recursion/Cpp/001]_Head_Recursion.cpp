#include <bits/stdc++.h>
using namespace std;

void func(int n)
{
    if (n>0)    // Base condition
    {
        func(n-1);   
        cout<< n<<" ";  // printing the value 
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a ;
    cin >> a;
    func(a);
    return 0;
}

// This will give output as 1 2 3 4 5 6 7 8 9 