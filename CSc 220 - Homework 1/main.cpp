// Name: Chris Panican
// CSC 22000-C Homework Project 1.

#include <iostream>
using namespace std;

void quicksort(int *a, int length) {
    int i, j1, j2, pivot, tmp;
    if(length>1) {
        i = (rand() % length);
        pivot = a[i]; a[i] = a[length-1]; a[length-1] = pivot;
        j1 = 0; j2 = length-1;
        while(j1 < j2 ) {
            for(; a[j1] < pivot ; j1++);
            for(; a[j2] >= pivot && j2 > j1 ; j2-- );
            if( j1 != j2 ) {
                tmp = a[j1]; a[j1] = a[j2]; a[j2] = tmp;
            }
        }
        a[length-1] = a[j1]; a[j1] = pivot;
        quicksort( a, j1);
        quicksort( a +j1+1, length -j1 -1);
    }
}

int quickselect(int *a, int k, int n) {
    quicksort(a, n);
    int j = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == a[i+1]) {
            j += 1;
        }
    }
    return a[k+j-1];
}

int main() {
    //Sorted Array: 0, 1, 1, 2, 3, 4, 4, 5, 6, 9
    //The 7th smallest number is 6
    int a[] = {0, 1, 4, 3, 2, 1, 4, 6, 5, 9};
    cout << quickselect(a, 7, 9) << endl;

    //Sorted Array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    //The 3rd smallest number is 2
    int a2[] = {0, 3, 2, 1, 5, 8, 6, 7, 4, 9};
    cout << quickselect(a2, 3, 9) << endl;
}