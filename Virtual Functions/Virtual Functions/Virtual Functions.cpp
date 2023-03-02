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
class Paw : public Actor
{
public:
    virtual void BeginPlay() override;  
};
int main()
{
    //Object* obj = new Object;
   //obj->BeginPlay();

    Actor* act = new Actor;
    act->BeginPlay();


    //delete obj;
    delete act;
    system("pause");
}
void Object::BeginPlay()
{
    cout << "Object BeginPlay() has called!" << endl;
}
void Actor::BeginPlay() 
{
    cout << "Actor BeginPlay() has called!" << endl;
    Object::BeginPlay();
}

