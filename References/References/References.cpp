#include <iostream>
#include <string>
using namespace std;

void Change(string& str);

int main()
{
	string myString = "Druid";

	Change(myString);
	cout << myString << endl;

	system("pause");
}

void Change(string& str)
{
	str += "!";
}