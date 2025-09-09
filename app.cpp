#include <iostream>
#include "app.h"
#include <string>

#define MAX_SIZE  200

using namespace std;

struct element
{
    int id;
    string date;
    string data;
};

App::App()
{
    displayMenu();

    userInput = 0;
    userData = new element[MAX_SIZE];
    n = 0;

    while(true)
    {
        cout << "Make Selection: ";
        cin >> userInput;

        switch(userInput)
        {
            case 0:
                cout << "i" << endl;
                insertEntry();
                break;
            case 1:
                cout << "v" << endl;
                break;
            case 2:
                cout << "d" << endl;
                displayEntries();
                break;
            default:
                cout << "defaulted" << endl;

        }
    }

}
App::~App()
{


}
void App::insertEntry()
{
    element tempElement;
    string userInput;
    cin >> userInput;
    tempElement.data = userInput;
    userData[0] = tempElement;
    n++;
}


void App::displayEntries()
{
    for(int i = 0; i < n;i++)
    {
        cout << userData[i].data << endl;   
    }
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
