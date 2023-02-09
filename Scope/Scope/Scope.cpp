#include <iostream>

using namespace std;
int a = 10;
int main()
{
    /*
    * {
    *   int a = 10;
    * }
    */
    {
        int b = 12;
        cout << b << endl;
        {
            int c = 14;
        }
        //cout << c << endl;
    }
    //cout << b << endl;
    cout << a << endl;

    system("pause");
}

