#include <iostream>
#include <string>

using namespace std;

class Character
{
public:

	Character();
	~Character();

	int* characterAge;
	float* characterHeath;
};

int main()
{
	Character* player = new Character;


	delete player;


	system("pause");
}
Character::Character()
{
	cout << "New character created!" << endl;

	characterAge = new int(10);

	characterHeath = new float(100.f);

}
Character::~Character()
{
	cout << "Character has destroy!" << endl;

	delete characterAge;
	delete characterHeath;
}

