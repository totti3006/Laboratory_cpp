#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

bool ArmstrongNum(int n)
{
    int count = 1, s = 0, a, last;

    a = n;
    while (a /= 10)
    {
        count++;
    }

    a = n;
    while (a > 0)
    {
        last = a % 10;
        s += pow(last, count);
        a /= 10;
    }

    if (s == n) return true;
    else return false;
}

int main(int arg, char** argv)
{
    ifstream ifs;
	ifs.open(argv[1]);
	int N;
	try
	{
		ifs >> N;
        printf("%s\n", ArmstrongNum(N)?"true":"false");
	}
	catch (char const* s)
	{
		printf("An exception occurred. Exception type: %s\n", s);
	}

	ifs.close();
	return 0;
}