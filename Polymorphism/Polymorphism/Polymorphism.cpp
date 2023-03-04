#include <iostream>
#include <string>

using namespace std;

class Object
{
public:
    virtual void BeginPlay();
};
class Actor : public Object
{
public:
    virtual void BeginPlay() override;
};
class Pawn : public Actor
{
public:
    virtual void BeginPlay() override;
};
int main()
{
    Object* ptrToObject = new Object;
    Actor* ptrToActor = new Actor;
    Pawn* ptrToPawn = new Pawn;

    Object* objectToArray[] = { ptrToObject, ptrToActor, ptrToPawn };

    for (int i = 0; i < 3; i++)
    {
        objectToArray[i]->BeginPlay();
    }




    delete ptrToObject;
    delete ptrToActor;
    delete ptrToPawn;
    system("pause");
}
void Object::BeginPlay()
{
    cout << "object BeginPlay() called" << endl;
}
void Actor::BeginPlay()
{
    cout << "actor BeginPlay() called" << endl;
}
void Pawn::BeginPlay()
{
    cout << "pawn BeginPlay() called" << endl;
}

