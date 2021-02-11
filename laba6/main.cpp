#include <iostream>
#include <vector>
#include "functions.cpp"
using namespace std;
struct vector2D {
    float x, y;
    bool operator==(vector2D a) {
        return (this->x == a.x && a.y == this->y);
    }
    bool operator>(int c) {
        return sqrt(pow(this->x,2) + pow(this->y,2)) > c;
    }
    bool operator>(vector2D c) {
        return sqrt(pow(this->x,2) + pow(this->y,2)) > sqrt(pow(c.x,2) + pow(c.y,2));
    }
};

int main() {
    vector<float> vec = {2.0, 2.0, 0, -12.12};
    vector<vector2D> vec2D = {{1.0, 1.0}, {0, 0}};
    vector<float>::const_iterator res;
    bool flag;
    flag = any_of<vector<vector2D>::const_iterator, vector2D>(vec2D.begin(), vec2D.end(), pred1);
    cout<<flag;
    return 0;
}
