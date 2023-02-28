#include <iostream>
#include <string>

using namespace std;

class Creature
{
public:
    Creature();
    void SetName(string name);

    string GetName();

    float GetHealth();

    void TakeDamage(float damage);

private:
    string Name;
    float Health;

protected:
    int numberOfLimbs;
};

class Globin : public Creature
{   
public:
    Globin();
    int GetNumberOfLimbs();
};

int main()
{

    Globin gobby;

    cout << gobby.GetName() << endl;
    cout << gobby.GetHealth() << endl;
    cout << gobby.GetNumberOfLimbs() << endl;
    
    system("pause");
}

Creature :: Creature()
{
    Health = 100.f;
    cout << "Create creature!   " << endl;
}
void Creature::SetName(string name)
{
    Name = name;
}
string Creature::GetName()
{
    return Name;
}
void Creature::TakeDamage(float damage)
{
    float Total;
    Total = Health - damage;
    if (Total <= 0)
    {
        cout << GetName() << " has Die!" << endl;
    }
    else
    {
        Health -= damage;
    }
    
    cout << "Health -> " << Health << endl;
}
float Creature::GetHealth()
{
    return Health;
}

Globin::Globin()
{
    numberOfLimbs = 5;
    
    SetName("Gobby");
}
int Globin::GetNumberOfLimbs()
{
    return numberOfLimbs;
}