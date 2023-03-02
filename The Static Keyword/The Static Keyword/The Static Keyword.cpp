#include <iostream>
#include <string>

using namespace std;

class Critter
{
public:
    Critter()
    {
        cout << "Critter has born" << endl;
        ++CritterCount;
    }
    static void AnnouncerCritter()
    {
        cout << CritterCount << endl;
    }
    int static CritterCount;
};
int Critter::CritterCount = 0;

int main()
{
    Critter::AnnouncerCritter();
    Critter* crit = new Critter();
    Critter::AnnouncerCritter();

    delete crit;
    system("pause");
}
