#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter size of Array:" << endl;
    cin >> n;
    cout << "Enter " << n << " numbers: " << endl;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }


    cout << "Largest number: " << endl;
    cout << largest;

    return 0;
}