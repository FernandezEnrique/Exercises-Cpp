#include<iostream>

using namespace std;

// Swapping vars with pointers

void swapper (int * p1, int * p2) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

int main () {
    int n1 = 5, n2 = 10;
    int * p1, * p2;
    cout << "n1: " << n1 << " n2: " << n2 << endl;
    p1 = &(n1);
    p2 = &(n2);
    swapper(p1, p2);
    cout << "n1: " << n1 << " n2: " << n2 << endl;
}