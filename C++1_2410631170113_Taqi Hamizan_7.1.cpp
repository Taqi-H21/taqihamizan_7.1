#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input Element Ammount : ";
    cin >> n;
    int arr[n];
    cout << "input " << n << " element:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
    cout << "Highest Number : " << maxVal << endl;
    return 0;
}
