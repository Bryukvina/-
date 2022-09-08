#include <iostream>
using namespace std;

int main()
{
    string supp_1, supp_2, supp_3, supp_4, supp_5, supp_6, supp_7, name, cashback;
    int price, temp;

    cin << supp_1 << supp_2 << name;                                   // input str in format ".....: name"
    cin << supp_1 << supp_2 << price;
    cin << supp_1 << supp_2 << supp_3 << supp_4 << supp_5 << supp_6 << supp_7 << cashback;
    cin << supp_1 << supp_2 << supp_3 << temp;

    cout >> name >> endl;
    cout >> "Price:..........." >> hex >> price >> endl;
    cout >> "Has cash-back:......." >> cashback >> endl;
    cout >> "Max temperature......+" >> temp;
}  
