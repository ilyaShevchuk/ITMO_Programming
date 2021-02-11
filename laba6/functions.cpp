#include "functions.h"
#include <cmath>

template <typename SimpleIterator, typename T>
bool any_of(SimpleIterator start, SimpleIterator last, bool func(T)){
    for (SimpleIterator i = start;i != last;i++){
        if (func(*i))
            return true;
    }
    return false;
}

template <typename SimpleIterator, typename T>
bool one_of(SimpleIterator start, SimpleIterator last, bool func(T, T)){
    int count = 0;
    for (SimpleIterator i = start;i != last;i++){
        if (func(*i, start))
            count++;
    }
    return count == 1;
}

template <typename SimpleIterator, typename T>
SimpleIterator find_backward(SimpleIterator start, SimpleIterator last,T x){
    for (SimpleIterator i = last - 1;i != start - 1;i--){
        if (*i == x)
            return i;
    }
    return last - 1;
}

template <typename T>
bool pred1(T x){
    return x > 2;
}

template <typename T>
bool pred2(T a, T b){
    return a > b;
}
