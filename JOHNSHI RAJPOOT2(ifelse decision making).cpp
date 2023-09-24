#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
int main()
{
	int a,b;
	// Write your code here
	cin >> a >> b;
	if(a>b)
	{
		cout << "greater" << endl;
	}
	else if (a<b)
	{
		cout << "smaller" << endl;
	}
	else
	{
		cout << "equal" << endl;
	}

return 0;
}
