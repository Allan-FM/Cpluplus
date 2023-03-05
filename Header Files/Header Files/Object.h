#pragma once
class Object
{
public:
    virtual void BeginPlay();

    void ObjectFunction()
    {
        cout << "Object Function!" << endl;
    }
};