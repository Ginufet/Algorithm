#ifndef _BUBBLESORT_HPP_
#define _BUBBLESORT_HPP_

#include "..\Sorting.hpp"
namespace sorting {
    
    //sorting an array in ascending order
    template<typename _Ty>
    void bubbleSort(_Ty a[], int n) {
        bool sorted = false; // using this to finish sorting in time
                             // otherwise scan will always be done n-1 times
        while (!sorted) {
            sorted = true;
            for (int i = 0; i < n; ++i) {
                if (a[i - 1] > a[i]) {
                    swap(a[i - 1], a[i]);
                    sorted = false;
                }
            }
            --n;
        }
    }

}

#endif // !_BUBBLESORT_HPP_
