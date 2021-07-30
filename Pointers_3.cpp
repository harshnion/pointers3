#include <iostream>

using namespace std;

void ModifyVariables(int a, int &b, int *c)
{
	a = b;
	b+=a;;
	c = new int(b);
	(*c)++;
}
int main()
{
	int a=0,b=1, *c;
	c = new int(2);
	ModifyVariables(a,b,c);
	cout<<a<<b<<*c;
	delete c;
}
