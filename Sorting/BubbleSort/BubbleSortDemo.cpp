/*
**Discribe: Sorting a group of number with bubble sort
**Date: Nov 17th, 2016
**Author: JIANG Yizhi
*/
#include"BubbleSort.hpp"
#include<iostream>


int main(void) {
    int a[13] = { 3, 12, 4, 65, 5, 34, 9 , 43, 4, 7, 10, 1, 1000 };
    
    std::cout << "The original array is:" << std::endl;
    for (int i = 0; i < 13; ++i) {
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;
    
    //sorting starts
    sorting::bubbleSort(a, 13);
    //sorting ends
    
    std::cout << "The sorted array is:" << std::endl;
    for (int i = 0; i < 13; ++i) {
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}

