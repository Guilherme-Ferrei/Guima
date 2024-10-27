#include<iostream>
using namespace std;
int main()
{
    int s;
    char r;
    do{
        cout << "\nDigite o seu salario ";
        cin >> s;
        s = s-(s*0.20);
        cout << "\no salario novo e " << s << "\reais";
        cout << "\nDeseja realizar um novo salario? (s/n)";
        cin >> r;
    }
    while(r == 's');
 return 0;
}
