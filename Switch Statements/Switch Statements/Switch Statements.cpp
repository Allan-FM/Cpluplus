#include <iostream>

using namespace std;

enum PlayerStatus
{
	PS_Running,
	PS_Walking,
	PS_Crouching,

};


const float runSpeed = 800.f;
const float walkSpeed = 500.f;
const float crouchSpeed = 350.f;

void UpdateMovementSpeed(PlayerStatus P_Status, float &speed);

int main()
{
	float movementSpeed;
	PlayerStatus status = PS_Crouching;

	UpdateMovementSpeed(status, movementSpeed);

	cout << "Movement Speed = " << movementSpeed << endl;

	system("pause");
}

void UpdateMovementSpeed(PlayerStatus P_Status, float &speed) 
{
	switch (P_Status)
	{
	case PS_Running:
		speed = runSpeed;
		break;
	case PS_Walking:
		speed = walkSpeed;
		break;
	case PS_Crouching:
		speed = crouchSpeed;
		break;
	default:
		break;
	}

}