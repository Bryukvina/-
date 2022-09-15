#include <iostream>
#include <map>
#include <string>
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Rus");
    map <string, const double> constans = {{"Кл", 1.6E-19}, {"В", 3.3E3}, {"Дж", 1.6E-19}};
    map <string, string> names = {{"Кл", "ед.заряда"}, {"В", "ед. потенциала"}, {"Дж", "эВ"}};

    double x;
    string constant;
    string name;
    
    cout << "Type the value in SI system with space in between: ";
    cin >> x >> constant;
    
    for (auto i : constans)
    {
        if (i.first == constant)
            name == names.find(x);
            cout << (x * i.second) << " " << name->second << endl;
    }
    
    return 0;
}
