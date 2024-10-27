#include<iostream>

using namespace std;

int main()
{
    float b,h,espesura,volume;
    cout << "\nDigite a base ";
    cin >> b;
    cout << "\nDigite a altura ";
    cin >> h;
    cout << "\nDigite a espesura ";
    cin >> espesura;
    volume = b*h*espesura;
    cout << "\nSeu volume foi =" << volume;
    return 0;
}