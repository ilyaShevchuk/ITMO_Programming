#include "dec.h"

void Cube::Right() {

    colors at, bt, ct, dt, ft, gt, ht, it;

    at = r[0][0];
    bt = r[0][1];
    ct = r[0][2];
    dt = r[1][0];
    ft = r[1][2];
    gt = r[2][0];
    ht = r[2][1];
    it = r[2][2];

    r[0][0] = gt;
    r[0][1] = dt;
    r[0][2] = at;
    r[1][0] = ht;
    r[1][2] = bt;
    r[2][0] = it;
    r[2][1] = ft;
    r[2][2] = ct;

    colors temp1 = u[0][2];
    u[0][2] = f[0][2];
    colors temp2 = b[0][2];
    b[0][2] = temp1;
    temp1 = d[0][2];
    d[0][2] = temp2;
    f[0][2] = temp1;

    temp1 = u[1][2];
    u[1][2] = f[1][2];
    temp2 = b[1][2];
    b[1][2] = temp1;
    temp1 = d[1][2];
    d[1][2] = temp2;
    f[1][2] = temp1;

    temp1 = u[2][2];
    u[2][2] = f[2][2];
    temp2 = b[2][2];
    b[2][2] = temp1;
    temp1 = d[2][2];
    d[2][2] = temp2;
    f[2][2] = temp1;
    cout << "R" << endl;
}

void Cube::RightAgainst() { // против часовой

    colors at, bt, ct, dt, ft, gt, ht, it;

    at = r[0][0];
    bt = r[0][1];
    ct = r[0][2];
    dt = r[1][0];
    ft = r[1][2];
    gt = r[2][0];
    ht = r[2][1];
    it = r[2][2];

    r[0][0] = ct;
    r[0][1] = ft;
    r[0][2] = it;
    r[1][0] = bt;
    r[1][2] = ht;
    r[2][0] = at;
    r[2][1] = dt;
    r[2][2] = gt;

    colors temp1 = u[0][2];
    u[0][2] = b[0][2];
    colors temp2 = f[0][2];
    f[0][2] = temp1;
    temp1 = d[0][2];
    d[0][2] = temp2;
    b[0][2] = temp1;

    temp1 = u[1][2];
    u[1][2] = b[1][2];
    temp2 = f[1][2];
    f[1][2] = temp1;
    temp1 = d[1][2];
    d[1][2] = temp2;
    b[1][2] = temp1;

    temp1 = u[2][2];
    u[2][2] = b[2][2];
    temp2 = f[2][2];
    f[2][2] = temp1;
    temp1 = d[2][2];
    d[2][2] = temp2;
    b[2][2] = temp1;
    cout << "R'" << endl;
}

void Cube::LeftAgainst() { // против часовой

    colors at, bt, ct, dt, ft, gt, ht, it;

    at = l[0][0];
    bt = l[0][1];
    ct = l[0][2];
    dt = l[1][0];
    ft = l[1][2];
    gt = l[2][0];
    ht = l[2][1];
    it = l[2][2];

    l[0][0] = ct;
    l[0][1] = ft;
    l[0][2] = it;
    l[1][0] = bt;
    l[1][2] = ht;
    l[2][0] = at;
    l[2][1] = dt;
    l[2][2] = gt;

    colors temp1 = u[0][0];
    u[0][0] = f[0][0];
    colors temp2 = b[0][0];
    b[0][0] = temp1;
    temp1 = d[0][0];
    d[0][0] = temp2;
    f[0][0] = temp1;

    temp1 = u[1][0];
    u[1][0] = f[1][0];
    temp2 = b[1][0];
    b[1][0] = temp1;
    temp1 = d[1][0];
    d[1][0] = temp2;
    f[1][0] = temp1;

    temp1 = u[2][0];
    u[2][0] = f[2][0];
    temp2 = b[2][0];
    b[2][0] = temp1;
    temp1 = d[2][0];
    d[2][0] = temp2;
    f[2][0] = temp1;

    cout << "L'" << endl;
}

void Cube::Left() {
    colors at, bt, ct, dt, ft, gt, ht, it;

    at = l[0][0];
    bt = l[0][1];
    ct = l[0][2];
    dt = l[1][0];
    ft = l[1][2];
    gt = l[2][0];
    ht = l[2][1];
    it = l[2][2];

    l[0][0] = gt;
    l[0][1] = dt;
    l[0][2] = at;
    l[1][0] = ht;
    l[1][2] = bt;
    l[2][0] = it;
    l[2][1] = ft;
    l[2][2] = ct;

    colors temp1 = u[0][0];
    u[0][0] = b[0][0];
    colors temp2 = f[0][0];
    f[0][0] = temp1;
    temp1 = d[0][0];
    d[0][0] = temp2;
    b[0][0] = temp1;

    temp1 = u[1][0];
    u[1][0] = b[1][0];
    temp2 = f[1][0];
    f[1][0] = temp1;
    temp1 = d[1][0];
    d[1][0] = temp2;
    b[1][0] = temp1;

    temp1 = u[2][0];
    u[2][0] = b[2][0];
    temp2 = f[2][0];
    f[2][0] = temp1;
    temp1 = d[2][0];
    d[2][0] = temp2;
    b[2][0] = temp1;

    cout << "L" << endl;
}

void Cube::Upper() {
    colors at, bt, ct, dt, ft, gt, ht, it;

    at = u[0][0];
    bt = u[0][1];
    ct = u[0][2];
    dt = u[1][0];
    ft = u[1][2];
    gt = u[2][0];
    ht = u[2][1];
    it = u[2][2];

    u[0][0] = gt;
    u[0][1] = dt;
    u[0][2] = at;
    u[1][0] = ht;
    u[1][2] = bt;
    u[2][0] = it;
    u[2][1] = ft;
    u[2][2] = ct;

    colors temp1 = f[0][0];
    f[0][0] = r[0][0];
    colors temp2 = l[0][0];
    l[0][0] = temp1;
    temp1 = b[2][2];
    b[2][2] = temp2;
    r[0][0] = temp1;

    temp1 = f[0][1];
    f[0][1] = r[0][1];
    temp2 = l[0][1];
    l[0][1] = temp1;
    temp1 = b[2][1];
    b[2][1] = temp2;
    r[0][1] = temp1;

    temp1 = f[0][2];
    f[0][2] = r[0][2];
    temp2 = l[0][2];
    l[0][2] = temp1;
    temp1 = b[2][0];
    b[2][0] = temp2;
    r[0][2] = temp1;

    cout << "U" << endl;
}

void Cube::UpperAgainst() {// против часовой
    colors at, bt, ct, dt, ft, gt, ht, it;

    at = u[0][0];
    bt = u[0][1];
    ct = u[0][2];
    dt = u[1][0];
    ft = u[1][2];
    gt = u[2][0];
    ht = u[2][1];
    it = u[2][2];

    u[0][0] = ct;
    u[0][1] = ft;
    u[0][2] = it;
    u[1][0] = bt;
    u[1][2] = ht;
    u[2][0] = at;
    u[2][1] = dt;
    u[2][2] = gt;

    colors temp1 = r[0][0];
    r[0][0] = f[0][0];
    colors temp2 = b[2][2];
    b[2][2] = temp1;
    temp1 = l[0][0];
    l[0][0] = temp2;
    f[0][0] = temp1;

    temp1 = r[0][1];
    r[0][1] = f[0][1];
    temp2 = b[2][1];
    b[2][1] = temp1;
    temp1 = l[0][1];
    l[0][1] = temp2;
    f[0][1] = temp1;

    temp1 = r[0][2];
    r[0][2] = f[0][2];
    temp2 = b[2][0];
    b[2][0] = temp1;
    temp1 = l[0][2];
    l[0][2] = temp2;
    f[0][2] = temp1;

    cout << "U'" << endl;
}

void Cube::Down() {
    colors at, bt, ct, dt, ft, gt, ht, it;

    at = d[0][0];
    bt = d[0][1];
    ct = d[0][2];
    dt = d[1][0];
    ft = d[1][2];
    gt = d[2][0];
    ht = d[2][1];
    it = d[2][2];

    d[0][0] = ct;
    d[0][1] = ft;
    d[0][2] = it;
    d[1][0] = bt;
    d[1][2] = ht;
    d[2][0] = at;
    d[2][1] = dt;
    d[2][2] = gt;

    colors temp1 = f[2][0];
    f[2][0] = r[2][0];
    colors temp2 = l[2][0];
    l[2][0] = temp1;
    temp1 = b[0][2];
    b[0][2] = temp2;
    r[2][0] = temp1;

    temp1 = f[2][1];
    f[2][1] = r[2][1];
    temp2 = l[2][1];
    l[2][1] = temp1;
    temp1 = b[0][1];
    b[0][1] = temp2;
    r[2][1] = temp1;

    temp1 = f[2][2];
    f[2][2] = r[2][2];
    temp2 = l[2][2];
    l[2][2] = temp1;
    temp1 = b[0][0];
    b[0][0] = temp2;
    r[2][2] = temp1;

    cout << "D" << endl;
}

void Cube::DownAgainst() { // против часовой
    colors at, bt, ct, dt, ft, gt, ht, it;

    at = d[0][0];
    bt = d[0][1];
    ct = d[0][2];
    dt = d[1][0];
    ft = d[1][2];
    gt = d[2][0];
    ht = d[2][1];
    it = d[2][2];

    d[0][0] = gt;
    d[0][1] = dt;
    d[0][2] = at;
    d[1][0] = ht;
    d[1][2] = bt;
    d[2][0] = it;
    d[2][1] = ft;
    d[2][2] = ct;

    colors temp1 = r[2][0];
    r[2][0] = f[2][0];
    colors temp2 = b[0][2];
    b[0][2] = temp1;
    temp1 = l[2][0];
    l[2][0] = temp2;
    f[2][0] = temp1;

    temp1 = r[2][1];
    r[2][1] = f[2][1];
    temp2 = b[0][1];
    b[0][1] = temp1;
    temp1 = l[2][1];
    l[2][1] = temp2;
    f[2][1] = temp1;

    temp1 = r[2][2];
    r[2][2] = f[2][2];
    temp2 = b[0][0];
    b[0][0] = temp1;
    temp1 = l[2][2];
    l[2][2] = temp2;
    f[2][2] = temp1;

    cout << "D'" << endl;
}

void Cube::Back() {

    colors at, bt, ct, dt, ft, gt, ht, it;

    at = b[0][0];
    bt = b[0][1];
    ct = b[0][2];
    dt = b[1][0];
    ft = b[1][2];
    gt = b[2][0];
    ht = b[2][1];
    it = b[2][2];

    b[0][0] = gt;
    b[0][1] = dt;
    b[0][2] = at;
    b[1][0] = ht;
    b[1][2] = bt;
    b[2][0] = it;
    b[2][1] = ft;
    b[2][2] = ct;

    colors temp1 = l[0][0];
    l[0][0] = u[0][2];
    colors temp2 = d[2][0];
    d[2][0] = temp1;
    temp1 = r[2][2];
    r[2][2] = temp2;
    u[0][2] = temp1;

    temp1 = l[1][0];
    l[1][0] = u[0][1];
    temp2 = d[2][1];
    d[2][1] = temp1;
    temp1 = r[1][2];
    r[1][2] = temp2;
    u[0][1] = temp1;

    temp1 = l[2][0];
    l[2][0] = u[0][0];
    temp2 = d[2][2];
    d[2][2] = temp1;
    temp1 = r[0][2];
    r[0][2] = temp2;
    u[0][0] = temp1;

    cout << "B" << endl;
}

void Cube::BackAgainst() {//  против часовой
    colors at, bt, ct, dt, et, ft, gt, ht, it;

    at = b[0][0];
    bt = b[0][1];
    ct = b[0][2];
    dt = b[1][0];
    ft = b[1][2];
    gt = b[2][0];
    ht = b[2][1];
    it = b[2][2];

    b[0][0] = ct;
    b[0][1] = ft;
    b[0][2] = it;
    b[1][0] = bt;
    b[1][2] = ht;
    b[2][0] = at;
    b[2][1] = dt;
    b[2][2] = gt;

    colors temp1 = r[2][2];
    r[2][2] = u[0][2];
    colors temp2 = d[2][0];
    d[2][0] = temp1;
    temp1 = l[0][0];
    l[0][0] = temp2;
    u[0][2] = temp1;

    temp1 = r[1][2];
    r[1][2] = u[0][1];
    temp2 = d[2][1];
    d[2][1] = temp1;
    temp1 = l[1][0];
    l[1][0] = temp2;
    u[0][1] = temp1;

    temp1 = r[0][2];
    r[0][2] = u[0][0];
    temp2 = d[2][2];
    d[2][2] = temp1;
    temp1 = l[2][0];
    l[2][0] = temp2;
    u[0][0] = temp1;

    cout << "B'" << endl;
}

void Cube::Front() {
    colors at, bt, ct, dt, ft, gt, ht, it;

    at = f[0][0];
    bt = f[0][1];
    ct = f[0][2];
    dt = f[1][0];
    ft = f[1][2];
    gt = f[2][0];
    ht = f[2][1];
    it = f[2][2];

    f[0][0] = gt;
    f[0][1] = dt;
    f[0][2] = at;
    f[1][0] = ht;
    f[1][2] = bt;
    f[2][0] = it;
    f[2][1] = ft;
    f[2][2] = ct;

    colors temp1 = r[2][0];
    r[2][0] = u[2][2];
    colors temp2 = d[0][0];
    d[0][0] = temp1;
    temp1 = l[0][2];
    l[0][2] = temp2;
    u[2][2] = temp1;

    temp1 = r[1][0];
    r[1][0] = u[2][1];
    temp2 = d[0][1];
    d[0][1] = temp1;
    temp1 = l[1][2];
    l[1][2] = temp2;
    u[2][1] = temp1;

    temp1 = r[0][0];
    r[0][0] = u[2][0];
    temp2 = d[0][2];
    d[0][2] = temp1;
    temp1 = l[2][2];
    l[2][2] = temp2;
    u[2][0] = temp1;

    cout << "F" << endl;
}

void Cube::FrontAgainst() {  //  против часовой
    colors at, bt, ct, dt, ft, gt, ht, it;

    at = f[0][0];
    bt = f[0][1];
    ct = f[0][2];
    dt = f[1][0];
    ft = f[1][2];
    gt = f[2][0];
    ht = f[2][1];
    it = f[2][2];

    f[0][0] = ct;
    f[0][1] = ft;
    f[0][2] = it;
    f[1][0] = bt;
    f[1][2] = ht;
    f[2][0] = at;
    f[2][1] = dt;
    f[2][2] = gt;

    colors temp1 = u[2][2];
    u[2][2] = r[2][0];
    colors temp2 = l[0][2];
    l[0][2] = temp1;
    temp1 = d[0][0];
    d[0][0] = temp2;
    r[2][0] = temp1;

    temp1 = u[2][1];
    u[2][1] = r[1][0];
    temp2 = l[1][2];
    l[1][2] = temp1;
    temp1 = d[0][1];
    d[0][1] = temp2;
    r[1][0] = temp1;

    temp1 = u[2][0];
    u[2][0] = r[0][0];
    temp2 = l[2][2];
    l[2][2] = temp1;
    temp1 = d[0][2];
    d[0][2] = temp2;
    r[0][0] = temp1;

    cout << "F'" << endl;
}

bool Cube::cornerCheck() {
    return ((u[2][2] == 4 && f[0][2] == 0 && r[0][0] == 3) || (u[2][2] == 4 && f[0][2] == 3 && r[0][0] == 0) ||
            (u[2][2] == 0 && f[0][2] == 4 && r[0][0] == 3) || (u[2][2] == 0 && f[0][2] == 3 && r[0][0] == 4) ||
            (u[2][2] == 3 && f[0][2] == 0 && r[0][0] == 4) || (u[2][2] == 3 && f[0][2] == 4 && r[0][0] == 0)) &&
           ((f[0][0] == 0 && l[0][2] == 2 && u[2][0] == 4) || (f[0][0] == 0 && l[0][2] == 4 && u[2][0] == 2) ||
            (f[0][0] == 2 && l[0][2] == 4 && u[2][0] == 0) || (f[0][0] == 2 && l[0][2] == 0 && u[2][0] == 4) ||
            (f[0][0] == 4 && l[0][2] == 2 && u[2][0] == 0) || (f[0][0] == 4 && l[0][2] == 0 && u[2][0] == 2)) &&
           ((u[0][2] == 4 && r[0][2] == 3 && b[2][2] == 1) || (u[0][2] == 4 && r[0][2] == 1 && b[2][2] == 3) ||
            (u[0][2] == 3 && r[0][2] == 4 && b[2][2] == 1) || (u[0][2] == 3 && r[0][2] == 1 && b[2][2] == 4) ||
            (u[0][2] == 1 && r[0][2] == 3 && b[2][2] == 4) || (u[0][2] == 1 && r[0][2] == 4 && b[2][2] == 3)) &&
           ((u[0][0] == 4 && b[2][0] == 1 && l[0][0] == 2) || (u[0][0] == 4 && b[2][0] == 2 && l[0][0] == 1) ||
            (u[0][0] == 2 && b[2][0] == 1 && l[0][0] == 4) || (u[0][0] == 2 && b[2][0] == 4 && l[0][0] == 1) ||
            (u[0][0] == 1 && b[2][0] == 4 && l[0][0] == 2) || (u[0][0] == 1 && b[2][0] == 2 && l[0][0] == 4));
}

bool Cube::oneCornerCheck() {
    return ((u[2][2] == 4 && f[0][2] == 0 && r[0][0] == 3) || (u[2][2] == 4 && f[0][2] == 3 && r[0][0] == 0) ||
            (u[2][2] == 0 && f[0][2] == 4 && r[0][0] == 3) || (u[2][2] == 0 && f[0][2] == 3 && r[0][0] == 4) ||
            (u[2][2] == 3 && f[0][2] == 0 && r[0][0] == 4) || (u[2][2] == 3 && f[0][2] == 4 && r[0][0] == 0)) ||
           ((f[0][0] == 0 && l[0][2] == 2 && u[2][0] == 4) || (f[0][0] == 0 && l[0][2] == 4 && u[2][0] == 2) ||
            (f[0][0] == 2 && l[0][2] == 4 && u[2][0] == 0) || (f[0][0] == 2 && l[0][2] == 0 && u[2][0] == 4) ||
            (f[0][0] == 4 && l[0][2] == 2 && u[2][0] == 0) || (f[0][0] == 4 && l[0][2] == 0 && u[2][0] == 2)) ||
           ((u[0][2] == 4 && r[0][2] == 3 && b[2][2] == 1) || (u[0][2] == 4 && r[0][2] == 1 && b[2][2] == 3) ||
            (u[0][2] == 3 && r[0][2] == 4 && b[2][2] == 1) || (u[0][2] == 3 && r[0][2] == 1 && b[2][2] == 4) ||
            (u[0][2] == 1 && r[0][2] == 3 && b[2][2] == 4) || (u[0][2] == 1 && r[0][2] == 4 && b[2][2] == 3)) ||
           ((u[0][0] == 4 && b[2][0] == 1 && l[0][0] == 2) || (u[0][0] == 4 && b[2][0] == 2 && l[0][0] == 1) ||
            (u[0][0] == 2 && b[2][0] == 1 && l[0][0] == 4) || (u[0][0] == 2 && b[2][0] == 4 && l[0][0] == 1) ||
            (u[0][0] == 1 && b[2][0] == 4 && l[0][0] == 2) || (u[0][0] == 1 && b[2][0] == 2 && l[0][0] == 4));
}

bool Cube::isComplete() {
    bool flag;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if (f[i][j] != 0)
                return false;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if (b[i][j] != 0)
                return false;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if (r[i][j] != 0)
                return false;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if (l[i][j] != 0)
                return false;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if (u[i][j] != 0)
                return false;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if (d[i][j] != 0)
                return false;
    return true;
}



void Cube::read() {
    ifstream input("Cube.in");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            input>>h;
            f[i][j] = static_cast<colors>(h);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            input>>h;
            b[i][j] = static_cast<colors>(h);
        }
    }


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            input>>h;
            l[i][j] = static_cast<colors>(h);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            input>>h;
            r[i][j] = static_cast<colors>(h);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            input>>h;
            u[i][j] = static_cast<colors>(h);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            input>>h;
            d[i][j] = static_cast<colors>(h);
        }
    }
}

int Cube::rand_between(const int from, const int to) {
    if (to == from)
        return to;
    if (to < from)
        return rand_between(to, from);
    return from + rand() % (to - from + 1);
}

void Cube::random() {
    int kol_com = rand_between(0, 10);
    int commands[kol_com];
    for (int i = 0; i < kol_com; i++) {
        commands[i] = rand_between(0, 10);
        cout << "random commands" << i << ": " << commands[i] << endl;
    }
    for (int i = 0; i < kol_com; i++) {
        if (commands[i] == 0) Front();
        if (commands[i] == 1) FrontAgainst();
        if (commands[i] == 2) Back();
        if (commands[i] == 3) BackAgainst();
        if (commands[i] == 4) Right();
        if (commands[i] == 5) RightAgainst();
        if (commands[i] == 6) Left();
        if (commands[i] == 7) LeftAgainst();
        if (commands[i] == 8) Upper();
        if (commands[i] == 9) UpperAgainst();
        if (commands[i] == 10) Down();
        if (commands[i] == 11) DownAgainst();
    }
}

void Cube::print() {
    cout << endl << "That's our cube : " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<f[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<b[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<l[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<r[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<u[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<d[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;


}

bool Cube::check_correct() {


    int color[6] = {0, 0, 0, 0, 0, 0};
    color[f[0][0]]++;
    color[f[0][1]]++;
    color[f[0][2]]++;
    color[f[1][0]]++;
    color[f[1][1]]++;
    color[f[1][2]]++;
    color[f[2][0]]++;
    color[f[2][1]]++;
    color[f[2][2]]++;

    color[b[0][0]]++;
    color[b[0][1]]++;
    color[b[0][2]]++;
    color[b[1][0]]++;
    color[b[1][1]]++;
    color[b[1][2]]++;
    color[b[2][0]]++;
    color[b[2][1]]++;
    color[b[2][2]]++;

    color[r[0][0]]++;
    color[r[0][1]]++;
    color[r[0][2]]++;
    color[r[1][0]]++;
    color[r[1][1]]++;
    color[r[1][2]]++;
    color[r[2][0]]++;
    color[r[2][1]]++;
    color[r[2][2]]++;

    color[l[0][0]]++;
    color[l[0][1]]++;
    color[l[0][2]]++;
    color[l[1][0]]++;
    color[l[1][1]]++;
    color[l[1][2]]++;
    color[l[2][0]]++;
    color[l[2][1]]++;
    color[l[2][2]]++;

    color[u[0][0]]++;
    color[u[0][1]]++;
    color[u[0][2]]++;
    color[u[1][0]]++;
    color[u[1][1]]++;
    color[u[1][2]]++;
    color[u[2][0]]++;
    color[u[2][1]]++;
    color[u[2][2]]++;

    color[d[0][0]]++;
    color[d[0][1]]++;
    color[d[0][2]]++;
    color[d[1][0]]++;
    color[d[1][1]]++;
    color[d[1][2]]++;
    color[d[2][0]]++;
    color[d[2][1]]++;
    color[d[2][2]]++;


    for (int i = 0; i < 6; i++) {
        if (color[i] != 9) {
            cout << "Bad cube. Try another one" << endl;
            return false;
        }
    }
    if (f[1][1] == 0 && b[1][1] == 1 && l[1][1] == 2 && r[1][1] == 3 && u[1][1] == 4 && d[1][1] == 5) {
        return true;
    } else {
        cout << "Bad cube. Try another one" << endl;
        return false;
    }
}