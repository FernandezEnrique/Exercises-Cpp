#include<iostream>
#include<iomanip>

using namespace std;

int * PosMayor (int *pv, int izda, int dcha);

int main () {
    int v [] = {10, 2, 3, 4, 5};

    int * pointerGT = PosMayor(v, 0, 5);
    
    cout << endl;
    cout << "MaxNumber: " << setw(5) << *pointerGT << endl;
    cout << endl;

    return 0;
}

int * PosMayor (int *pv, int izda, int dcha) {
    
    // Pointer that will be returned
    int * pointer;

    // Int to store the maxNumber
    int maxNumber = 0;

    // Bool to check if maxNumber has already been changed
    bool maxChanged = false;

    for (int i=izda; i<dcha; i++) {
        if ( !maxChanged || (pv[i] > maxNumber) ) {
            maxNumber = pv[i];
            pointer = &pv[i];
            maxChanged = true;
        }
    }

    return pointer;
}