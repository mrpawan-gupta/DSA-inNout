#include <bits/stdc++.h>
using namespace std;

int fun1(int n) // recursive functionn 
{
	if (n > 0) // the base condition it is used for terminating the recursion // until this condition satisfy fxn will all itself 
	{
		cout << n << " "; // printing the value 
		fun1(n - 1); // recursion will have two phase calling and returning  // this is calling phase 
	} // these all will utilise stack memory total (n+1) activation record will be created // recursion fxn is memory consuming fxn 

	return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
	cin >> a;
	fun1(a); // function is called now the control to this fxn to complete the task 
	
    return 0;
}