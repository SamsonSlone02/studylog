#include <iostream>
#include "app.h"
using namespace std;
App::App()
{
    displayMenu();

    int userInput = 0;
    cout << "Make Selection: ";
    cin >> userInput;

    switch(userInput)
    {
        case 0:
            cout << "i" << endl;
            break;
        case 1:
            cout << "v" << endl;
            break;
        default:
            cout << "defaulted" << endl;

    }

}
App::~App()
{


}
void App::displayMenu()
{

    string menuItems[] = {"Insert","View"};
    const int menuLength = 2;

    for(int i = 0; i < menuLength; i++)
    {
        cout << menuItems[i] << ": ["<< i << "]" <<endl;
    }

}
