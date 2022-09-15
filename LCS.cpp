#include <iostream>
#define size 1000

using  namespace std;

int main()
{
    int a[size], b[size];
    int lcs_arr[size][size];
    int n, m, i, j, k;
    int ans[size];

    cout << "input the lenght of the first array:" << endl;
    cin >> n;
    cout << "input the first array with space in between:" << endl;
    for (i = 0; i < n; i ++)
        cin >> a[i];

    cout << "input the lenght of the second array:" << endl;
    cin >> m;
    cout << "input the second array with space in between:" << endl;
    for (i = 0; i < m; i ++)
        cin >> b[i];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i] == b[j])
                lcs_arr[i][j] = lcs_arr[i - 1][j - 1] + 1;
            else
                lcs_arr[i][j] = max(lcs_arr[i][j - 1], lcs_arr[i - 1][j]);
        }
    }

    i = n - 1;
    j = m - 1;
    k = 0;
    while (i >= 0 and j >= 0)
    {
        if (a[i] == b[j])
        {
            ans[k] = a[i];
            i--;
            j--;
            k++;
        }
        else if (lcs_arr[i - 1][j] > lcs_arr[i][j - 1])
            i --;
        else
            j--;
    };
    
    cout << "Lengh of the LCS is:" << lcs_arr[n - 1][m - 1] << endl;
    cout << "the LCS is:";
    // output answer
    for (i = k - 1; i >= 0; i--)
        cout << ans[i] << " ";


    return 0;

};
