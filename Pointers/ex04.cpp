#include<iostream>

using namespace std;

int main () {
    int v[50] = {1,3,5,7,9,11,13,15,17,19,21}; // Σ(2n - 1) = n² (maths)
    int length = 11;
    int * ptr1, *ptr2;
    int sum = 0;
    ptr1 = &(v[0]);
    ptr2 = &(v[length-1]);
    while (ptr1 <= ptr2) {
        sum += *ptr1;
        if (ptr1 != ptr2)
            sum += *ptr2;
        ptr1++;
        ptr2--;
    }
    cout << "Sum: " << sum << endl;
}