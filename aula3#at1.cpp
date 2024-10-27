#include<iostream>

using namespace std;

int main()
{
    int lado1, lado2, lado3;
    cout << "\nDigite o primeiro lado do triangulo ";
    cin >> lado1;
    cout << "\nDigite o segundo lado do traingulo ";
    cin >> lado2;
    cout << "\nDigite o terceiro lado do triangulo ";
    cin >> lado3;
    if (lado1==lado2 and lado1==lado3)
    cout << "\nTriangulo equilatero";
    if (lado1==lado2 and lado1 and lado2 != lado3 or lado2 == lado3 and lado1 != lado2 or lado1 == lado3 and lado2 != lado3)
    cout << "\nTriangulo isoceles";
    if (lado1!=lado2 or lado2!=lado3 or lado1!=lado3)
    cout << "\nTriangulo escaleno";
    return 0;
}