#include <iostream>
#include <string>

using namespace std;

class Dog 
{
public:

	Dog();

	string Name;
	int Age;
	float Health;

	void Bark()
	{
		cout << "Woof!" << endl;
	}
};

int main()
{
	Dog dog;
	
	cout << dog.Name << endl;
	cout << dog.Age << endl;
	cout << dog.Health << endl;


	system("pause");
}
Dog::Dog()
{
	Bark();

	Name = "Default Name";
	Age = 10;
	Health = 100.f;
}
