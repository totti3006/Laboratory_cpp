#include <iostream>
#include <fstream>
using namespace std;

void print_primenum(int l, int r)
{
	if (l <= r && l >= 0 && l <= 1000 && r >= 0 && r <= 1000)
	{
		int primenum = 0;
		for (int i = l; i < r; i++)
		{
			int s, count = 0;
			for (int j = 1; j <= i; j++)
			{
				s = i % j;
				if (s == 0)
					count++;
			}
			if (count == 2)
			{
				primenum++;
				if (primenum > 1)
					cout << " " << i;
				else cout << i;
			}
		}
	}
	cout << "\n";
}

int main(int arg, char** argv)
{
    ifstream ifs;
	ifs.open(argv[1]);
	int l, r;
	try
	{
		ifs >> l >> r;
        print_primenum(l , r);
	}
	catch (char const* s)
	{
		printf("An exception occurred. Exception type: %s\n", s);
	}

	ifs.close();
	return 0;
}