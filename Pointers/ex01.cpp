#include<iostream>

using namespace std;

int main () {
    double sol;
    int *ptr; 
    int entero = 5; 
    ptr = &entero;
    sol = pow(*ptr, 2.0);
    cout << sol << endl; 
}