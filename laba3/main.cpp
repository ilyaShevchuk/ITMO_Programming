#include <iostream>
#include <vector>
template<typename T>
const T& minis(const T& a, const T& b){
    return a < b ? a : b;
}

using namespace std;

class myEX :public exception
{
public:
    myEX(string msg, int new_excess_ = 0)
    :my_error(msg)
    ,excess(new_excess_)
    {}
    int get_excess(){
        return excess;
    }
    const char* what() const noexcept{
        return my_error.c_str();
    }
private:
    string my_error;
    int excess;
};


template <typename T>
class queue{
private:
    int N;
    std::vector<T> qu;
    T first, last;
public:
    queue(int N_)
        :N(N_)
        ,first(1)
        ,last(0)
    {
        qu.assign(N_, 0);
    }
    int empty(){
        if (last < first)
            return 1;
        else
            return 0;
    }
    void insert(T x) {
        if (last < N) {
            last++;
            qu[last] = x;
        } else
            throw myEX("The queue is full", x);
    }
    void remove(){
        T x;
        if (empty() == 1)
            throw myEX("Can not be removed from an empty queue");
        else{
            first++;
        }
    }
    void print(){
        if (empty() == 1 )
            std::cout<<"Nothing";
        else
            for(int i = first; i <= last; i++)
                std::cout<<qu[i]<<' ';
    }
};

int main() {
    queue<int> my_qu(10);
    try {
        my_qu.insert(12);
        my_qu.remove();
        my_qu.remove();
    }
    catch(myEX &ex) {
        std::cout<<ex.what()<<'\n';
        std::cout<<ex.get_excess()<<'\n';
    }
    float x = 0.12;
    float y = 0.14;
    cout<<minis(x, y);
    return 0;
}
