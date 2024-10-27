#include<iostream>
using namespace std;
int main()
{
    int s,pm;
    float a;
    cout << "\nDigite sua altura em ";
    cin >> a;
    cout << "\nAgora seu sexo (1-M/2-F)";
    cin >> s;
    if (s==1){
    pm=(72.7 * a)-58;
    cout << "\nSeu peso ideal e " << pm;
    }
    else
    cout << "\nSeu peso ideal e " << (62.1 * a)-44.7;
    return 0;
    }
    