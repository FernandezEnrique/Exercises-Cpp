#include<iostream>

using namespace std;

// looping through an array with pointers

int main () {
    int v[50] = {30, 20, 54, 26, 35};
    int length = 5;
    int * ptr1 = &(v[0]);
    int * ptr2 = &(v[length-1]);
    int sum = 0;
    while (ptr1 <= ptr2) {
        sum += *ptr1;
        ptr1++;
    }
    cout << "Sum: " << sum << endl;
}