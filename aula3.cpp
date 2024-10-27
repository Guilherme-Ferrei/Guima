#include<iostream>

using namespace std;

int main(){
    int idade;
    cout << "\n Digite sua idade ";
    cin >> idade;
    if(idade<18){ // if == se
        cout << "\n Voce e menor de idade ";
        cout << "\n Va estudar ";
    }
    else{ // else == se não
        cout << "\n Voce e maior de idade";
        cout << "\n Va trabalhar";
    }
    cout << "\n Beleza!!";
    return 0;
}