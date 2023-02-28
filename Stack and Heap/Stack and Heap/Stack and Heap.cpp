#include <iostream>
#include <string>

using namespace std;

struct Character
{
    Character();
    void PrintHealth();
    string Name;
    float Health;
};

Character::Character()
{
    Name = "Defaul name";
    Health = 100.f;
}
void Character::PrintHealth()
{
    cout << "Health = " << Health << endl;  
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        Character* ptrToPlayer = new Character();

        cout << ptrToPlayer->Name << endl;
        ptrToPlayer->PrintHealth();

        delete ptrToPlayer;
    }



    system("pause");
}
