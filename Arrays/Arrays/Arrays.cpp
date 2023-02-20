#include <iostream>

using namespace std;

int main()
{
	/*
	int myIntArray[10];

	for (int i = 0; i <= 10; i++)
	{
		myIntArray[i] = i;
		cout << myIntArray[i] << endl;
	}
	*/

	int MyArray[5]{ 9,5,4,7,8 };
	//cout << "MyArray[0] = " << MyArray[0] << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "MyArray [" << i << "] = "<< MyArray[i] << endl;
	}

	system("pause");
}