#include<iostream>

using namespace std;

int main () {
    double resultado;
    int *ptr; 
    int entero = 5; 
    ptr = &entero;
    resultado = pow(*ptr, 2.0);
    cout << resultado << endl; 
}