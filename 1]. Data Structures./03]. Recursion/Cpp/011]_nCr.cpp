#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
	if (n<=1)
	return 1;
	else 
	return fact(n-1)*n;
}
int nCr(int n,int r)


{
	int num,den;
	num= fact(n);
	den=fact(r)*fact(n-r);
	
	return num/den;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x , y ;
    cin >> x >> y ;
    cout << "The value of x are : " << x << " " << y << endl;
    cout << "The nCr value is : " << nCr(x,y) << endl;
    return 0;
}