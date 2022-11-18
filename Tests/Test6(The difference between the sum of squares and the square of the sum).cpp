#include <iostream>
using namespace std;

int main()
{
	int b = 0;
	int c = 0;
	for (int i = 0; i <= 100; i++)
	{
		b = b + i * i;
		c = c + i;
	}
	c = c * c;
int d = b - c;
cout << d;
}