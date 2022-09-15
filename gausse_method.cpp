#include <iostream>
using namespace std;

int main()
{
    int i, j, k, n;
    double c1, c2; // const, that will be used in algoritm's ways

    cout << "enter the size of the matrix: " << endl;
    cin >> n;

    double **arr = new double *[n]; // creating of matrix with main constans
    for (i = 0; i <= n; i++)
        arr[i] = new double [n];

    double **sup_arr = new double *[n]; // creating of support matrix
    for (i = 0; i <= n; i++)
        sup_arr[i] = new double [n];

    double *b = new double [n]; // the list of the free mem
    double *x = new double [n]; // list of the answers

    cout << "write the matrix of factors" << endl;

    for (i = 0; i <= n; i++) // reading the coeficients to the memory
    {
        for (j = 0; j <= n; j++)
        {
            cin >> arr[i][j];
            sup_arr[i][j] = arr[i][j];
        }
        cin >> b[i];
    }

    // first part of the algorithm
    for (k = 0; k <= n; k++)
    {
        for (j = k; j <= n; j++)
        {
            c1 = arr[i][j] / arr[j][j];
            for (i = k; i <= n; i++)
            {
                arr[j][j] = arr[i][j] - c1 * arr[k][i];
            }
            b[i] = b[i] - c1 * b[k];
        }
    }

    // second part of the algorithm
    for (k = n; k >= 0; k--)
    {
        c2 = 1;
        for (j = k + 1; j <= n; j++)
        {
            c1 = arr[k][j] * x[j];
            c2 = c2 + c1;
        }
        x[k] = (b[k] - c2) / arr[k][k];
    }

    //output the result
    for (i = 0; i <= n; i++)
    {
        cout << "x" << i << "= " << x[i] << endl;
    }
    
    return 0;
}

