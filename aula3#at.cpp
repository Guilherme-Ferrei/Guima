#include<iostream>

using namespace std;

int main()
{
    int idade;
    char sexo;
    cout << "Digite seu sexo (m/f)";
    cin >> sexo;
    if (sexo == 'f')
        cout << "\nMulheres nao servem ao exercito";
        else{
         cout << "\nDigite sua idade ";
         cin >> idade;      
         if(idade >=18)
         cout << "\nVoce podera servir";
          else
             cout << "Voce nao pode servir";
        }
    
    return 0;
}