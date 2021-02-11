#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;
enum colors{
    RED,
    ORANGE,
    BLUE,
    GREEN,
    YELLOW,
    WHITE
};

class Cube {
private:
    colors r[3][3];
    colors l[3][3];
    colors u[3][3];
    colors d[3][3];
    colors b[3][3];
    colors f[3][3];
    int h;
    int rand_between(const int from, const int to);
public:
    void Right();
    void RightAgainst();

    void LeftAgainst();
    void Left();

    void Upper();
    void UpperAgainst();

    void Down();
    void DownAgainst();

    void Back();
    void BackAgainst();

    void Front();
    void FrontAgainst();

    bool cornerCheck();
    bool oneCornerCheck();

    bool isComplete();
    void read();

    void random();

    void print();
    bool check_correct() ;

    void Solve();
};