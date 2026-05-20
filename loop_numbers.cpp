#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0;
    

    for(int i = 1; i<=5; i++)
    {
        cout << "Enter number " << i << ":";
        cin >> n;
        
        if(n < 0)
        {
            cout << "Warning: Negative number entered" << endl  ;
        }
        sum = sum + n;
        
    }

    cout << "Total Sum = " << sum << endl;

    return 0;
}
