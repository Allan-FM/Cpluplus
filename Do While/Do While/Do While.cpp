#include <iostream>

using namespace std;

int main()
{
    double numberPi = 3.14159;
    double numberE = 2.71818118;

    int count = 0;

    bool  condition = true;
    do
    {
        cout << "The number PI is: " << numberPi << endl;
        cout << "The number E is: " << numberE << endl;
        cout << "The count is: " << count << endl;
        cout << "PI + E * count -> " << numberPi + numberE * count << endl;

        count++;
        if (count <= 100)
        {
            condition = true;
        }
        else
        {
            condition = false;
        }
    } while (condition);
}