#include <bits/stdc++.h>
using namespace std;

//int x = 0; // this is globally accessed in all fxn 
int func(int n)
{
	 static int x=0; // this will take memory in main
	if (n > 0) // base condition of recursion 
	{
		x++; // everytime x is getting incremented 
		return func(n - 1) + x; // at returning time the addition of x will be performed // it will add last increatemented value everytinme
	}
	return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
	cin >> a;
	cout << func(a) <<endl; // function call
	b = func(a); // at 2nd time the value of x will be equal to the last incremented value if 5 is first time then this will be updated as 10 
	cout << b << endl;

	return 0;

}