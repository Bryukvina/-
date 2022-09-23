#include <iostream>
using namespace std;

void merge(int arr[], int arr_sort[], int low, int mid, int high)
{
    int k = low;
    int i = low;
    int j = mid + 1;

    while ((i <= mid) && (j <= high))
    {
        if (arr[i] <= arr[j])
        {
            arr_sort[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            arr_sort[k] = arr[j];
            j++;
            k++;
        }
    }


    while (i <= mid)
    {
        arr_sort[k] = arr[i];
        i++;
        k++;
    };

    for (i = low; i <= high; i++)
    {
        arr[i] = arr_sort[i];
    };
}

void sort_m(int arr[], int arr_sort[], int low, int high)
{
    if (low >= high)
    {
        return;
    }

    else
    {
        int mid = (low + high) >> 1;
        
        sort_m(arr, arr_sort, low, mid);
        sort_m(arr, arr_sort, mid + 1, high);

        merge(arr, arr_sort, low, mid, high);
    }
}

int main()
{
    int i, n;

    cout << "Input the lenght of the array: " << endl;
    cin >> n;

    int arr[n]; // the list of the free mem
    int arr_sort[n];

    cout << "Input array to sort with spaces in between: " << endl;

    for (i = 0; i < n; i++) // reading the coefficients to the memory
    {
        cin >> arr[i];
    };
    
    sort_m(arr, arr_sort, 0, n - 1);
    

    
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
