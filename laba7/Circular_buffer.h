#pragma once
#include <iterator>
#include <exception>
class MyException:public std::exception
{
private:
    const char* m_error;

public:
    MyException(const char* error)
            : m_error(error)
    {
    }

    const char* what() { return m_error; }
};
template<class T>
class Circle_buffer {

private:
    int capacity;
    int head = 0;
    int tail = 0;
    T *arr;

public:
    class iterator;

    Circle_buffer() {
        capacity = 0;
        tail = 0;
        head = 0;
    }

    Circle_buffer(int size) {
        capacity = size;
        tail = 0;
        head = 0;
        arr = new T[capacity];
        for (int i = 0; i < capacity; i++) {
            arr[i] = 0;
        }
    }

    ~Circle_buffer() {
        delete[] arr;
    }


    iterator begin() const {
        return iterator(arr + head);
    }

    iterator end() const {
        return iterator(arr + tail);
    }


    int get_capacity() {
        return capacity;
    }

    T &operator[](int i) {
        if (i > capacity)
            throw MyException("Out of range");
        return arr[i];
    }


    void push_back(const T &x) {
        if (tail >= capacity) {
            tail = capacity - 1;
        }
        arr[tail] = x;
        if (tail != capacity + 1) {
            tail++;
        }
    }

    void push_front(const T &x) {
        if (tail == capacity) {
            arr[head] = x;
            return;
        }
        for (int i = tail; i >= head; i--)
            arr[i + 1] = arr[i];
        arr[head] = x;
        tail++;
    }

    void pop_front() {
        arr[head] = 0;
        head++;
    }


    void pop_back() {
        arr[tail] = 0;
        tail--;
    }


    void set_capacity(int new_capacity) {
        if (new_capacity < capacity)
            return;
        T *new_arr = new T[new_capacity];
        for (int i = 0; i < new_capacity; i++) {
            new_arr[i] = i < capacity ? arr[i] : 0;
        }
        arr = new_arr;
        capacity = new_capacity;
        delete[] new_arr;
    }

    void push(iterator iter, T x) {
        for (auto i = iterator(arr + tail); i != iter - 1; i--) {
            *(i + 1) = *i;
        }
        *iter = x;
    }

    void pop(iterator iter) {
        for (auto i = iterator(arr + tail); i != iter - 1; i--) {
            *(i + 1) = *i;
        }
        tail--;
    }

    class iterator : public std::iterator<std::random_access_iterator_tag, T> {
    private:
        T *p;

    public:

        iterator() : p(nullptr) {}

        iterator(T *p) : p(p) {}


        iterator operator++() {
            p++;
            return *this;
        }

        iterator operator++(T) {
            iterator tmp(*this);
            ++p;
            return tmp;
        }

        iterator &operator--() {
            p--;
            return *this;
        }


        iterator operator--(T) {
            iterator tmp(*this);
            --p;
            return tmp;
        }

        iterator &operator+=(T x) {
            p += x;
            return *this;
        }

        iterator &operator-=(T x) {
            p -= x;
            return *this;
        }

        auto operator-(const iterator &it) const {
            return p - it.p;
        }

        iterator operator+(T x) {
            return iterator(p + x);
        }

        iterator operator-(T x) {
            return iterator(p - x);ы
        }

        T &operator*() const {
            return *p;
        }

        T *operator->() const {
            return p;
        }

        T &operator[](const T x) {
            return p[x];
        }

        bool operator==(const iterator &x) const {
            return x.p == this->p;
        }

        bool operator!=(const iterator &x) const {
            return x.p != this->p;
        }

        bool operator<(const iterator &x) const {
            return x.p < this->p;
        }

        bool operator>(const iterator &x) const {
            return x.p > this->p;
        }

        bool operator>=(const iterator &x) const {
            return x.p >= this->p;
        }

        bool operator<=(const iterator &x) const {
            return x.p <= this->p;
        }

    };


};