#include <iostream>
#include <string>


using namespace std;

struct Container
{
    string Name;

    int X;
    int Y;
    int Z;
};

int main()
{
    int a = 100;
    int* pointer;

    pointer = &a;
    //cout << *pointer << endl;

    int b = 50;
    pointer = &b;
    //cout << *pointer << endl;

    int number[] = { 0,1,2,3,4,5,6,7,8,9,10 };
    int* NumPtr;

    NumPtr = number;

    //cout << *NumPtr << endl;
    NumPtr++;
    //cout << *NumPtr << endl;

    Container container = { "Sam", 15,72,99 };
    Container* PtrToCont = &container;

    cout << (*PtrToCont).Name << endl;
    cout << PtrToCont->Name << endl;

    system("pause");
}


