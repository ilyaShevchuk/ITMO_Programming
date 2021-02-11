#include <iostream>
#include <algorithm>
#include "Circular_buffer.h"


int main() {

    try {
        Circle_buffer<int> a(6);
        a.push_front(12);
        a.push_front(2);
        a.push_front(4);
        a.push_back(10);
        a.push_back(20);
        a.push_back(15);

        for (auto dig : a)
            std::cout << dig << " ";
        std::cout << '\n';

        std::sort(a.begin(), a.end());

        for (auto dig : a)
            std::cout << dig << " ";
        std::cout << '\n';

        auto result = std::find(a.begin(), a.end(), 2);
        std::cout << *result << std::endl;

    }
    catch (MyException err){
        std::cout<<err.what();
    }
    return 0;
}