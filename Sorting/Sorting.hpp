#ifndef _SORTING_HPP_
#define _SORTING_HPP_

namespace sorting {

    template<typename _Ty>
    void swap(_Ty &first, _Ty &second) {
        _Ty temp = first;
        first = second;
        second = temp;
    }

}

#endif // !_SORTING_HPP
