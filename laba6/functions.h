#pragma once


template <typename SimpleIterator, typename T>
bool any_of(SimpleIterator start, SimpleIterator last, bool (*func)(T));

template <typename SimpleIterator, typename T>
bool one_of(SimpleIterator start, SimpleIterator last, bool (*func)(T , T));

template <typename SimpleIterator, typename T>
SimpleIterator find_backward(SimpleIterator start, SimpleIterator last,T x);

template <typename T>
bool pred1(T x);

template <typename T>
bool pred2(T a, T b);

