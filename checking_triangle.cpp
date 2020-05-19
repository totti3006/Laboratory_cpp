#include <iostream>
#include <fstream>
using namespace std;


int main(int arg, char** argv)
{
    ifstream ifs;
	ifs.open(argv[1]);
	try
	{
		int edge1, edge2, edge3;
        	ifs >> edge1 >> edge2 >> edge3;
        
		if (edge1 == edge2 && edge1 == edge3)
			cout << "Equilateral triangle\n";
		else if (edge1 == edge2 || edge1 == edge3 || edge2 == edge3)
			cout << "Isosceles triangle\n";
		else  cout << "Scalene triangle\n"; 
	}
	catch (char const* s)
	{
		printf("An exception occurred. Exception type: %s\n", s);
	}

	ifs.close();
	return 0;
}
