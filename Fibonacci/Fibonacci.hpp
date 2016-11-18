#ifndef _FIBONACCI_HPP_
#define _FIBONACCI_HPP_

__int64 fibBiRec(int n) { // binary recursion version
    return (n < 2) ?
        (__int64)n :
        fibBiRec(n - 1) + fibBiRec(n - 2);
}

__int64 fibLinearRec(int n, __int64 &prev) {
    if (n == 0) {
        prev = 1;
        return 0;
    }
    else {
        __int64 prevPrev;
        prev = fibLinearRec(n - 1, prevPrev);
        return prev + prevPrev;
    }
}

__int64 fibIter(int n) {
    __int64  f = 1, g = 0;
    while (n-- > 0) {
        g += f;
        f = g - f;
    }
    return g;
}

#endif // !_FIBONACCI_HPP_
