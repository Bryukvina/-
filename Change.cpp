#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "input a and b with space in between: ";
    cin >> x >> y;
    x = x + y; // x = 14 y = 5
    y = x - y; // x = 14 y = 9
    x = x - y;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    return 0;
}
