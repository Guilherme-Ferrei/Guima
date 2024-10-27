#include <iostream>
using namespace std;
int main()
{
    float b,B,h,a;
    char r;
    do{
        cout << "\nDigite a base maior do trapezio em cm ";
        cin >> B;
        cout << "\nDigite a base menor do trapezio em cm ";
        cin >> b;
        cout << "\nDigite a altura do trapezio em cm ";
        cin >> h;
        a = ((B+b)*h)/2;
        cout << "\nA area foi de " << a << "\ncm";
        cout << "\nDeseja continuar (s/n)";
        cin >> r;
    }
    while (r == 's');
 return 0;
    
}
