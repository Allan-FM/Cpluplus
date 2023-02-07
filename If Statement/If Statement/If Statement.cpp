#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 5;
    int c = 6;

    if (b < a)
    {
        cout << "a is less than b" << endl;
    }
    else if(a < b)
    {
        cout << "b is not less than a " << endl;
    }
    else if(a == b)
    {
        cout << "a is equal to b" << endl;
    }
    else
    {
        cout << "ERRO 404!!" << endl;
    }

    system("pause");
}

