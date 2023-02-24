#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	Animal();
	Animal(string name, int age, int num_limbs);
	string  Name;
	int Age;
	int NumberOfLimbs;

	void Report();
};

int main()
{
	Animal animal;
	animal.Report();

	Animal animal2("Dog", 7, 5);

	system("pause");
}

Animal::Animal()
{
	cout << "Animal is born" << endl;

	Name = "DEFAULT";
	Age = 10;
	NumberOfLimbs = 4;
}

Animal::Animal(string name, int age, int num_limbs)
	:Name(name),Age(age),NumberOfLimbs(num_limbs)
{
	Report();
}

void Animal::Report()
{
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "NumberOfLimbs: " << NumberOfLimbs << endl;
}


