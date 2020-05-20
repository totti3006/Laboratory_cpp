#include <iostream>
#include <fstream>
using namespace std;
void Fibonacci(int n) 
{
	int f1 = 1, f2 = 1, fn = 1;
	int i = 3;
	if (n == 1 || n == 2) cout << 1 << "\n";
	else
	{
		while (i <= n)
		{
			fn = f1 + f2;
			f1 = f2;
			f2 = fn;
			i++;
		}
		cout << fn << "\n";
	}
}
int main(int narg, char** argv)
{
	ifstream ifs;
	ifs.open(argv[1]);
	int a;
	try
	{
		while (ifs >> a)
		{
			Fibonacci(a);
		}
	}
	catch (char const* s)
	{
		printf("An exception occurred. Exception type: %s\n", s);
	}

	ifs.close();
	return 0;
}
