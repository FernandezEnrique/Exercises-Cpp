#include<iostream>
#include<iomanip>

using namespace std;

int main () {
    
    // Array with negative numbers
    int v [10] = {-5, -3, -4, -6, -45, -2, -12, -23, -1, -10};
    int util_v = 10;

    // Ptr pointing to array
    int * ptr = v;

    for (int i=0; i<util_v; i++) {

        // Changes the symbol if it is negative
        if (*ptr < 0)
            *ptr = *ptr * -1;

        // Shows the new value
        cout << "New value: " << setw(3) << v[i] << endl;

        // Moves the pointer to the next position
        ptr++;
    }

    cout << endl;

    return 0;
}