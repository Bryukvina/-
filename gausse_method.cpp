#include <iostream>
using namespace std;

int main()
{
    int i, j, k, n;
    double c1, c2; // const, that will be used in algoritm's ways

    cout << "enter the count of equations: " << endl;
    cin >> n;

    double arr[n][n];
    double b[n]; // the list of the free mem
    double x[n]; // list of the answers

    cout << "write the matrix of factors" << endl;

    for (i = 0; i < n; i++) // reading the coefficients to the memory
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        cin >> b[i];
    }

    // first part of the algorithm
    for (k = 0; k < n; k++)
    {
        for (j = k + 1; j < n; j++)
        {
            c1 = arr[j][k] / arr[k][k];
            for (i = k; i < n; i++)
            {
                arr[j][i] = arr[j][i] - c1 * arr[k][i];
            }
            b[j] = b[j] - c1 * b[k];
        }
    }

    // second part of the algorithm
    for (k = n - 1; k >= 0; k--)
    {
        c2 = 0;
        for (j = k + 1; j < n; j++)
        {
            c1 = arr[k][j] * x[j];
            c2 = c2 + c1;
        }
        x[k] = (b[k] - c2) / arr[k][k];
    };
    
    //output the result
    for (i = 0; i < n; i++)
    {
        cout << "x" << i << "= " << x[i] << endl;
    }
    
    return 0;
}
