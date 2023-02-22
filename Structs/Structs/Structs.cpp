#include <iostream>
#include <string>

using namespace std;

struct LocationVector
{
    float x;
    float y;
    float z;
};

struct Player
{
    int Level;
    float Dameage;
    float Health;
    float Stamina;

    LocationVector Location = { 0.f,0.f,0.f };

    void TakeDamage(float dmg)
    {
        Health -= dmg;
    }
    int GetLevel()
    {
        return Level;
    }

    void DisplayLocation()
    {
        cout << "Location.X = " << Location.x << endl;
        cout << "Location.Y = " << Location.y << endl;
        cout << "Location.Z = " << Location.z << endl;
    }
};

int main()
{
    Player player;
    player.Level = 10;
    player.Dameage = 100.f;
    player.Health = 500.f;
    player.Stamina = 320.f;  

    cout << "Level: " << player.Level << endl;


    cout << "Health -> " << player.Health << endl;
    player.TakeDamage(40.f);
    cout << "TakeDamage -> " << 40 << endl;
    cout << "Health player -> " << player.Health << endl;

    player.DisplayLocation();

    Player player2;
    player2 = { 1,50.f,40.f,35.4f,{40.f,59.f,60.f} };
    player2.DisplayLocation();

    system("pause");
}
