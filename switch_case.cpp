#include <iostream>

using namespace std;

int main()
{
    
    char day;
    
    cout << "Enter number: ";
    
    cin >> day;
    
    switch(day)
    {
        case'0':
            cout << "SUNDAY";
            break;

        case '1':
            cout << "MONDAY";
            break;

        case '2':
            cout << "TUESDAY";
            break;

        case '3':
            cout << "WEDNESDAY";
            break;

        case '4':
            cout << "THURSDAY";
            break;

        case '5':
            cout << "FRIDAY";
            break;

        case '6':
            cout << "SATURDAY";
            break;

        default:
            cout << "Invalid Input";
    }

    return 0;
}