#include<iostream>
#include<ctime>
#include"Fibonacci.hpp"

int main(void) {
    clock_t start, finish;
    double totalTime;
    int n = 30;
    __int64 res = 0;

    std::cout << "Computing...\n" << std::endl;

    // binary recursion version
    start = clock();
    res = fibBiRec(n);
    finish = clock();
    totalTime = finish - start;
    std::cout << "Binary Recursion Version" << std::endl;
    std::cout << "The " << n << "th element is " << res
              << ", using " << totalTime << " ms" << std::endl;

    n += 50;
    // linear recursion version
    start = clock();
    __int64 prev;
    res = fibLinearRec(n, prev);
    finish = clock();
    totalTime = finish - start;
    std::cout << "Linear Recursion Version" << std::endl;
    std::cout << "The " << n << "th element is " << res
        << ", using " << totalTime << " ms" << std::endl;
    
    // iteration version
    start = clock();
    res = fibIter(n);
    finish = clock();
    totalTime = finish - start;
    std::cout << "Iteration Version" << std::endl;
    std::cout << "The " << n << "th element is " << res
        << ", using " << totalTime << " ms" << std::endl;

    return 0;
}