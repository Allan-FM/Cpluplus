#include <iostream>

using namespace std;

void welcome()
{
    cout << "Welcome!!" << endl;
}

void printNumber(int numberToPrint)
{
    cout << numberToPrint << endl;
}

int add(int x, int y)
{
    int result;
    result = x + y;
    return result;
}

int main()
{
    welcome();

    printNumber(14);

    int number;
    number = add(15, 16);

    printNumber(number);

    system("pause");
}
