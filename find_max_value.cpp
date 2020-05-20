#include <iostream>
#include <fstream>
using namespace std;
void maxValue(int n, double *a) 
{
	float maxNum = *a;
	for (int i = 1; i < n; i++)
	{
		if (maxNum < *(a + i)) maxNum = *(a + i);
	}
	cout << maxNum << "\n";
}
int main(int narg, char** argv)
{
	ifstream ifs;
	ifs.open(argv[1]);

	int size;
	ifs >> size;
	ifs.ignore(1, '\n');
    int i = 0;
	double *a = new double[size];
	try {

		while (ifs >> a[i])
		{
			i++;
		}
		maxValue(size, a);
	}
	catch (char const* s)
	{
		printf("An exception occurred. Exception type: %s\n", s);
	}

	ifs.close();
	return 0;
}
