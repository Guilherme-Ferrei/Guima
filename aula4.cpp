#include<iostream>

using namespace std;

int main()
{
    float h,b,area;
    char r;
    do{ // faça
        system ("cls");
        cout << "\nDigite a base";
        cin >> b;
        cout << "\nDigite a altura";
        cin >> h;
        area = (b*h)/2;
        cout << "\nA area do triangulo =" << area;
        cout << "\nDeseja realizar outro calculo (s/n) ";
        cin >> r;
    }
    while(r=='s' or r =='S'); // enquanto 
    system("cls");
    cout << "\nObrigado !! \n\n";
    return 0;
}
