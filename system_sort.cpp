#include <iostream>
#include <algorithm>
using namespace std; 

int main()
{
    int i, n;

    cout << "Input the lenght of the array: " << endl;
    cin >> n;

    int arr[n]; 
    int arr_sort[n];

    cout << "Input array to sort with spaces in between: " << endl;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr_sort [i] = arr[i];
    };
    
    sort(arr, arr + n);

    sort(arr_sort, arr_sort + n, [](auto const &i, auto const &j) {return i > j});


    cout << "Sorted array in right order:" << endl;

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
    cout << "Sorted array in opposite order:" << endl;

    for (i = 0; i < n; i++)
    {
        cout << arr_sort[i] << " ";
    };
}
