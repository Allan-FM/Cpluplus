#include <iostream>

using namespace std;

int main()
{
	int i = 1;
	int j = 2;
	int k = 3;

	if ((i <= j && k < i) || (j <= k && i == j))
	{
		cout << "This will be printed!" << endl;
	}

	system("pause");
}

