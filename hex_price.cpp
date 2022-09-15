#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    string supp_1, supp_2, supp_3, supp_4, supp_5, supp_6, supp_7, name, cashback;
    int price, temp;
    
    cout << "Input the important information about the product" << endl;
    cout << "Product's name: ";
    cin >> name;
    cout <<  "Product's price: ";
    cin >> price;
    cout <<  "Is cash-back available for this product? (true/false) ";
    cin >> cashback;
    cout <<  "Maximum storing temperature: ";
    cin >> temp;



    cout << "The information is:" << endl;
    cout << name << endl;
    cout << "Price:..........." << hex << setw(8) << price << endl;
    cout << "Has cash-back:......." << cashback << endl;
    cout << "Max temperature......+" << temp;
    
    return 0;
}  
