#include <iostream>

using namespace std;

void welcome();
void printNumber(int numberToPrint);
int add(int x, int y);

char getYesNo();
void PrintResponse(char printToResponse);

void AskYesOrNoQuestion();

int main()
{
    AskYesOrNoQuestion();
    system("pause");
}

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
char getYesNo()
{
    cout << "N or Y.\n";
    char response;
    cin >> response;
    return response;
}
void PrintResponse(char printToResponse)
{
    cout << printToResponse << endl;
}

void AskYesOrNoQuestion()
{
    welcome();

    char answer = getYesNo();
    PrintResponse(answer);

}


