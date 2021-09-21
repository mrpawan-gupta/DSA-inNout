#include <bits/stdc++.h>
using namespace std;

int x=0;   // Global  Variables 
int func (int n)
{
	
	if (n>0) // Base condition
	{
		x++;
		return func(n-1)+x;  // return expression and Call
	}
	return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a=5;     // local variable
    
	a= func(5);  
	printf("%d\n",a);
	
	a=func(5);
	printf("%d\n",a);

    return 0;
}