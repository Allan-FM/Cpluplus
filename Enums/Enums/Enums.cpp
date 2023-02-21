#include <iostream>
#include <string>


using namespace std;

enum PlayerStatus
{
    PS_Crouched,
    PS_Stading,
    PS_Walking,
    PS_Running
};
enum MovementStatus
{
    MS_Crouched,
    MS_Running
};

int main()
{
    PlayerStatus playerStatus;
    MovementStatus movementStatus;

    playerStatus = PS_Crouched;
    if (playerStatus == PS_Crouched)
    {
        cout << "The player is Crouching" << endl;
    }
      
    playerStatus = PS_Running;
    if (playerStatus == PS_Running)
    {
        cout << "The player is runnig!" << endl;
    }
    system("pause");
}
