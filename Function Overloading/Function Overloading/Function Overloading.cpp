#include <iostream>
#include <string>

using namespace std;

void Print(string str);
void Print(int number);

int main()
{
    Print("hello");
    Print(3);

    system("pause");

}
void PrintNumber(int number)
{
    cout << number << endl;
}
void PrintNumber(int x, int y)
{
    cout << x << endl;
    cout << y << endl;
}

void Print(string str)
{
    cout << str << endl;
}
void Print(int number)
{
    cout << number << endl;
}