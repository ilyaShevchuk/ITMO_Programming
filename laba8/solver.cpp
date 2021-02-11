#include "dec.h"
void Cube::Solve(){
    if (!isComplete() && check_correct()) {

        while (u[0][1] != 5 || u[1][0] != 5 || u[1][2] != 5 || u[2][1] != 5) {
            if (f[1][2] == 5) {
                while (u[1][2] == 5) {
                    Upper();
                }
                Right();
            }
            if (f[1][0] == 5) {
                while (u[1][0] == 5) {
                    Upper();
                }
                LeftAgainst();
            }
            if (r[1][0] == 5) {
                while (u[2][1] == 5) {
                    Upper();
                }
                FrontAgainst();
            }
            if (r[1][2] == 5) {
                while (u[0][1] == 5) {
                    Upper();
                }
                Back();
            }
            if (l[1][2] == 5) {
                while (u[2][1] == 5) {
                    Upper();
                }
                Front();
            }
            if (l[1][0] == 5) {
                while (u[0][1] == 5) {
                    Upper();
                }
                BackAgainst();
            }
            if (b[1][2] == 5) {
                while (u[1][2] == 5) {
                    Upper();
                }
                RightAgainst();
            }
            if (b[1][0] == 5) {
                while (u[1][0] == 5) {
                    Upper();
                }
                Left();
            }
            if (d[1][2] == 5) {
                while (u[1][2] == 5) {
                    Upper();
                }
                Right();
                Right();
            }
            if (d[2][1] == 5) {
                while (u[0][1] == 5) {
                    Upper();
                }
                BackAgainst();
                BackAgainst();
            }
            if (d[1][0] == 5) {
                while (u[1][0] == 5) {
                    Upper();
                }
                LeftAgainst();
                LeftAgainst();
            }
            if (d[0][1] == 5) {
                while (u[2][1] == 5) {
                    Upper();
                }
                Front();
                Front();
            }

            if (f[2][1] == 5) {
                Front();
                while (u[1][0] == 5) {
                    Upper();
                }
                LeftAgainst();
            }
            if (f[0][1] == 5) {
                Front();
                while (u[1][2] == 5) {
                    Upper();
                }
                Right();
            }
            if (r[2][1] == 5) {
                Right();
                while (u[2][1] == 5) {
                    Upper();
                }
                FrontAgainst();
            }
            if (r[0][1] == 5) {
                Right();
                while (u[0][1] == 5) {
                    Upper();
                }
                Back();
            }
            if (b[0][1] == 5) {
                BackAgainst();
                while (u[1][0] == 5) {
                    Upper();
                }
                Left();
            }
            if (b[2][1] == 5) {
                BackAgainst();
                while (u[1][2] == 5) {
                    Upper();
                }
                RightAgainst();
            }
            if (l[2][1] == 5) {
                LeftAgainst();
                while (u[2][1] == 5) {
                    Upper();
                }
                Front();
            }
            if (l[0][1] == 5) {
                LeftAgainst();
                while (u[0][1] == 5) {
                    Upper();
                }
                BackAgainst();
            }
            cout <<"Cобран цветок" << endl ;
            print();
        }

        while (f[0][1] != f[1][1] || u[2][1] != 5) {
            Upper();
        }
        Front();
        Front();
        while (r[0][1] != r[1][1] || u[1][2] != 5) {
            Upper();
        }
        Right();
        Right();
        while (b[2][1] != b[1][1] || u[0][1] != 5) {
            Upper();
        }
        Back();
        Back();
        while (l[0][1] != l[1][1] || u[1][0] != 5) {
            Upper();
        }
        Left();
        Left();
        cout << "Построен правильный крест " << endl;
        print();
        int count = 0;
        while (d[0][0] != 5 || d[0][2] != 5 || d[2][0] != 5 || d[2][2] != 5) {
            if (b[2][2] == 5) {
                if ((u[0][2] == 3 && r[0][2] == 1) || (u[0][2] == 1 && r[0][2] == 3)) {
                    while (d[2][2] != 5 || r[2][2] != 3 || b[0][2] != 1) {
                        Back();
                        Upper();
                        BackAgainst();
                        UpperAgainst();
                    }

                }
                if ((u[0][2] == 3 && r[0][2] == 0 && b[2][2] == 5) || (u[0][2] == 0 && r[0][2] == 3 && b[2][2] == 5)) {
                    Upper();
                    while (d[0][2] != 5 || f[2][2] != 0 || r[2][0] != 3) {
                        Right();
                        Upper();
                        RightAgainst();
                        UpperAgainst();
                    }
                }
                if ((u[0][2] == 0 && r[0][2] == 2 && b[2][2] == 5) || (u[0][2] == 2 && r[0][2] == 0 && b[2][2] == 5)) {
                    Upper();
                    Upper();
                    while (d[0][0] != 5 || l[2][2] != 2 || f[2][0] != 0) {
                        Front();
                        Upper();
                        FrontAgainst();
                        UpperAgainst();
                    }
                }
                if ((u[0][2] == 2 && r[0][2] == 1 && b[2][2] == 5) || (u[0][2] == 1 && r[0][2] == 2 && b[2][2] == 5)) {
                    UpperAgainst();
                    while (d[2][0] != 5 || b[0][0] != 1 || l[2][0] != 2) {
                        Left();
                        Upper();
                        LeftAgainst();
                        UpperAgainst();
                    }
                }
            }

            if (u[0][2] == 5) {
                if ((b[2][2] == 3 && r[0][2] == 1) || (b[2][2] == 1 && r[0][2] == 3)) {
                    while (d[2][2] != 5 || r[2][2] != 3 || b[0][2] != 1) {
                        Back();
                        Upper();
                        BackAgainst();
                        UpperAgainst();
                    }
                }
                if ((b[2][2] == 3 && r[0][2] == 0 && u[0][2] == 5) || (b[2][2] == 0 && r[0][2] == 3 && u[0][2] == 5)) {
                    Upper();
                    while (d[0][2] != 5 || f[2][2] != 0 || r[2][0] != 3) {
                        Right();
                        Upper();
                        RightAgainst();
                        UpperAgainst();
                    }
                }
                if ((b[2][2] == 0 && r[0][2] == 2 && u[0][2] == 5) || (b[2][2] == 2 && r[0][2] == 0 && u[0][2] == 5)) {
                    Upper();
                    Upper();
                    while (d[0][0] != 5 || l[2][2] != 2 || f[2][0] != 0) {
                        Front();
                        Upper();
                        FrontAgainst();
                        UpperAgainst();
                    }
                }
                if ((b[2][2] == 2 && r[0][2] == 1 && u[0][2] == 5) || (b[2][2] == 1 && r[0][2] == 2 && u[0][2] == 5)) {
                    UpperAgainst();
                    while (d[2][0] != 5 || b[0][0] != 1 || l[2][0] != 2) {
                        Left();
                        Upper();
                        LeftAgainst();
                        UpperAgainst();
                    }
                }
            }

            if (r[0][2] == 5) {
                if ((u[0][2] == 3 && b[2][2] == 1) || (u[0][2] == 1 && b[2][2] == 3)) {
                    while (d[2][2] != 5 || r[2][2] != 3 || b[0][2] != 1) {
                        Back();
                        Upper();
                        BackAgainst();
                        UpperAgainst();
                    }
                }
                if ((u[0][2] == 3 && b[2][2] == 0 && r[0][2] == 5) || (u[0][2] == 0 && b[2][2] == 3 && r[0][2] == 5)) {
                    Upper();
                    while (d[0][2] != 5 || f[2][2] != 0 || r[2][0] != 3) {
                        Right();
                        Upper();
                        RightAgainst();
                        UpperAgainst();
                    }
                }
                if ((u[0][2] == 0 && b[2][2] == 2 && r[0][2] == 5) || (u[0][2] == 2 && b[2][2] == 0 && r[0][2] == 5)) {
                    Upper();
                    Upper();
                    while (d[0][0] != 5 || l[2][2] != 2 || f[2][0] != 0) {
                        Front();
                        Upper();
                        FrontAgainst();
                        UpperAgainst();
                    }
                }
                if ((u[0][2] == 2 && b[2][2] == 1 && r[0][2] == 5) || (u[0][2] == 1 && b[2][2] == 2 && r[0][2] == 5)) {
                    UpperAgainst();
                    while (d[2][0] != 5 || b[0][0] != 1 || l[2][0] != 2) {
                        Left();
                        Upper();
                        LeftAgainst();
                        UpperAgainst();
                    }
                }
            }
            //случай правого дальнего угла закончек
            if (b[2][0] == 5) {
                if ((u[0][0] == 3 && l[0][0] == 1) || (u[0][0] == 1 && l[0][0] == 3)) {
                    Upper();
                    while (d[2][2] != 5 || r[2][2] != 3 || b[0][2] != 1) {
                        Back();
                        Upper();
                        BackAgainst();
                        UpperAgainst();
                    }
                }
                if ((u[0][0] == 3 && l[0][0] == 0 && b[2][0] == 5) || (u[0][0] == 0 && l[0][0] == 3 && b[2][0] == 5)) {
                    Upper();
                    Upper();
                    while (d[0][2] != 5 || f[2][2] != 3 || r[2][0] != 3) {
                        Right();
                        Upper();
                        RightAgainst();
                        UpperAgainst();
                    }
                }
                if ((u[0][0] == 0 && l[0][0] == 2 && b[2][0] == 5) || (u[0][0] == 2 && l[0][0] == 0 && b[2][0] == 5)) {
                    UpperAgainst();
                    while (d[0][0] != 5 || l[2][2] != 2 || f[2][0] != 0) {
                        Front();
                        Upper();
                        FrontAgainst();
                        UpperAgainst();
                    }
                }
                if ((u[0][0] == 2 && l[0][0] == 1 && b[2][0] == 5) || (u[0][0] == 1 && l[0][0] == 2 && b[2][0] == 5)) {
                    while (d[2][0] != 5 || b[0][0] != 1 || l[2][0] != 2) {
                        Left();
                        Upper();
                        LeftAgainst();
                        UpperAgainst();
                    }
                }
            }

            if (u[0][0] == 5) {
                if ((b[2][0] == 3 && l[0][0] == 1) || (b[2][0] == 1 && l[0][0] == 3)) {
                    Upper();
                    while (d[2][2] != 5 || r[2][2] != 3 || b[0][2] != 1) {
                        Back();
                        Upper();
                        BackAgainst();
                        UpperAgainst();
                    }
                }
                if ((b[2][0] == 3 && l[0][0] == 0 && u[0][0] == 5) || (b[2][0] == 0 && l[0][0] == 3 && u[0][0] == 5)) {
                    Upper();
                    Upper();
                    while (d[0][2] != 5 || f[2][2] != 0 || r[2][0] != 3) {
                        Right();
                        Upper();
                        RightAgainst();
                        UpperAgainst();
                    }
                }
                if ((b[2][0] == 0 && l[0][0] == 2 && u[0][0] == 5) || (b[2][0] == 2 && l[0][0] == 0 && u[0][0] == 5)) {
                    UpperAgainst();
                    while (d[0][0] != 5 || l[2][2] != 2 || f[2][0] != 0) {
                        Front();
                        Upper();
                        FrontAgainst();
                        UpperAgainst();
                    }
                }
                if ((b[2][0] == 2 && l[0][0] == 1 && u[0][0] == 5) || (b[2][0] == 1 && l[0][0] == 2 && u[0][0] == 5)) {
                    while (d[2][0] != 5 || b[0][0] != 1 || l[2][0] != 2) {
                        Left();
                        Upper();
                        LeftAgainst();
                        UpperAgainst();
                    }
                }
            }

            if (l[0][0] == 5) {
                if ((u[0][0] == 3 && b[2][0] == 1) || (u[0][0] == 1 && b[2][0] == 3)) {
                    Upper();
                    while (d[2][2] != 5 || r[2][2] != 3 || b[0][2] != 1) {
                        Back();
                        Upper();
                        BackAgainst();
                        UpperAgainst();
                    }
                }
                if ((u[0][0] == 3 && b[2][0] == 0 && l[0][0] == 5) || (u[0][0] == 0 && b[2][0] == 3 && l[0][0] == 5)) {
                    Upper();
                    Upper();
                    while (d[0][2] != 5 || f[2][2] != 0 || r[2][0] != 3) {
                        Right();
                        Upper();
                        RightAgainst();
                        UpperAgainst();
                    }
                }
                if ((u[0][0] == 0 && b[2][0] == 2 && l[0][0] == 5) || (u[0][0] == 2 && b[2][0] == 0 && l[0][0] == 5)) {
                    UpperAgainst();
                    while (d[0][0] != 5 || l[2][2] != 2 || f[2][0] != 0) {
                        Front();
                        Upper();
                        FrontAgainst();
                        UpperAgainst();
                    }
                }
                if ((u[0][0] == 2 && b[2][0] == 1 && l[0][0] == 5) || (u[0][0] == 1 && b[2][0] == 2 && l[0][0] == 5)) {
                    while (d[2][0] != 5 || b[0][0] != 1 || l[2][0] != 2) {
                        Left();
                        Upper();
                        LeftAgainst();
                        UpperAgainst();
                    }
                }
            }
            // закончен второй угол

            if (f[0][0] == 5) {
                if ((u[2][0] == 3 && l[0][2] == 1) || (u[2][0] == 1 && l[0][2] == 3)) {
                    Upper();
                    Upper();
                    while (d[2][2] != 5 || r[2][2] != 3 || b[0][2] != 1) {
                        Back();
                        Upper();
                        BackAgainst();
                        UpperAgainst();
                    }
                }
                if ((u[2][0] == 3 && l[0][2] == 0 && f[0][0] == 5) || (u[2][0] == 0 && l[0][2] == 3 && f[0][0] == 5)) {
                    UpperAgainst();
                    while (d[0][2] != 5 || f[2][2] != 0 || r[2][0] != 3) {
                        Right();
                        Upper();
                        RightAgainst();
                        UpperAgainst();
                    }
                }
                if ((u[2][0] == 0 && l[0][2] == 2 && f[0][0] == 5) || (u[2][0] == 2 && l[0][2] == 0 && f[0][0] == 5)) {
                    while (d[0][0] != 5 || l[2][2] != 2 || f[2][0] != 0) {
                        Front();
                        Upper();
                        FrontAgainst();
                        UpperAgainst();
                    }
                }
                if ((u[2][0] == 2 && l[0][2] == 1 && f[0][0] == 5) || (u[2][0] == 1 && l[0][2] == 2 && f[0][0] == 5)) {
                    Upper();
                    while (d[2][0] != 5 || b[0][0] != 1 || l[2][0] != 2) {
                        Left();
                        Upper();
                        LeftAgainst();
                        UpperAgainst();
                    }
                }
            }

            if (u[2][0] == 5) {
                if ((f[0][0] == 3 && l[0][2] == 1) || (f[0][0] == 1 && l[0][2] == 3)) {
                    Upper();
                    Upper();
                    while (d[2][2] != 5 || r[2][2] != 3 || b[0][2] != 1) {
                        Back();
                        Upper();
                        BackAgainst();
                        UpperAgainst();
                    }
                }
                if ((f[0][0] == 3 && l[0][2] == 0 && u[2][0] == 5) || (f[0][0] == 0 && l[0][2] == 3 && u[2][0] == 5)) {
                    UpperAgainst();
                    while (d[0][2] != 5 || f[2][2] != 0 || r[2][0] != 3) {
                        Right();
                        Upper();
                        RightAgainst();
                        UpperAgainst();
                    }
                }
                if ((f[0][0] == 0 && l[0][2] == 2 && u[2][0] == 5) || (f[0][0] == 2 && l[0][2] == 0 && u[2][0] == 5)) {
                    while (d[0][0] != 5 || l[2][2] != 2 || f[2][0] != 0) {
                        Front();
                        Upper();
                        FrontAgainst();
                        UpperAgainst();
                    }
                }
                if ((f[0][0] == 2 && l[0][2] == 1 && u[2][0] == 5) || (f[0][0] == 1 && l[0][2] == 2 && u[2][0] == 5)) {
                    Upper();
                    while (d[2][0] != 5 || b[0][0] != 1 || l[2][0] != 2) {
                        Left();
                        Upper();
                        LeftAgainst();
                        UpperAgainst();
                    }
                }
            }

            if (l[0][2] == 5) {
                if ((u[2][0] == 3 && f[0][0] == 1) || (u[2][0] == 1 && f[0][0] == 3)) {
                    Upper();
                    Upper();
                    while (d[2][2] != 5 || r[2][2] != 3 || b[0][2] != 1) {
                        Back();
                        Upper();
                        BackAgainst();
                        UpperAgainst();
                    }
                }
                if ((u[2][0] == 3 && f[0][0] == 0 && l[0][2] == 5) || (u[2][0] == 0 && f[0][0] == 3 && l[0][2] == 5)) {
                    UpperAgainst();
                    while (d[0][2] != 5 || f[2][2] != 0 || r[2][0] != 3) {
                        Right();
                        Upper();
                        RightAgainst();
                        UpperAgainst();
                    }
                }
                if ((u[2][0] == 0 && f[0][0] == 2 && l[0][2] == 5) || (u[2][0] == 2 && f[0][0] == 0 && l[0][2] == 5)) {
                    while (d[0][0] != 5 || l[2][2] != 2 || f[2][0] != 0) {
                        Front();
                        Upper();
                        FrontAgainst();
                        UpperAgainst();
                    }
                }
                if ((u[2][0] == 2 && f[0][0] == 1 && l[0][2] == 5) || (u[2][0] == 1 && f[0][0] == 2 && l[0][2] == 5)) {
                    Upper();
                    while (d[2][0] != 5 || b[0][0] != 1 || l[2][0] != 2) {
                        Left();
                        Upper();
                        LeftAgainst();
                        UpperAgainst();
                    }
                }
            }
            //закончен случай третьего угла

            if (f[0][2] == 5) {
                if ((u[2][2] == 3 && r[0][0] == 1) || (u[2][2] == 1 && r[0][0] == 3)) {
                    UpperAgainst();
                    while (d[2][2] != 5 || r[2][2] != 3 || b[0][2] != 1) {
                        Back();
                        Upper();
                        BackAgainst();
                        UpperAgainst();
                    }
                }
                if ((u[2][2] == 3 && r[0][0] == 0 && f[0][2] == 5) || (u[2][2] == 0 && r[0][0] == 3 && f[0][2] == 5)) {
                    while (d[0][2] != 5 || f[2][2] != 0 || r[2][0] != 3) {
                        Right();
                        Upper();
                        RightAgainst();
                        UpperAgainst();
                    }
                }
                if ((u[2][2] == 0 && r[0][0] == 2 && f[0][2] == 5) || (u[2][2] == 2 && r[0][0] == 0 && f[0][2] == 5)) {
                    Upper();
                    while (d[0][0] != 5 || l[2][2] != 2 || f[2][0] != 0) {
                        Front();
                        Upper();
                        FrontAgainst();
                        UpperAgainst();
                    }
                }
                if ((u[2][2] == 2 && r[0][0] == 1 && f[0][2] == 5) || (u[2][2] == 1 && r[0][0] == 2 && f[0][2] == 5)) {
                    Upper();
                    Upper();
                    while (d[2][0] != 5 || b[0][0] != 1 || l[2][0] != 2) {
                        Left();
                        Upper();
                        LeftAgainst();
                        UpperAgainst();
                    }
                }
            }

            if (u[2][2] == 5) {
                if ((f[0][2] == 3 && r[0][0] == 1) || (f[0][2] == 1 && r[0][0] == 3)) {
                    UpperAgainst();
                    while (d[2][2] != 5 || r[2][2] != 3 || b[0][2] != 1) {
                        Back();
                        Upper();
                        BackAgainst();
                        UpperAgainst();
                    }
                }
                if ((f[0][2] == 3 && r[0][0] == 0 && u[2][2] == 5) || (f[0][2] == 0 && r[0][0] == 3 && u[2][2] == 5)) {
                    while (d[0][2] != 5 || f[2][2] != 0 || r[2][0] != 3) {
                        Right();
                        Upper();
                        RightAgainst();
                        UpperAgainst();
                    }
                }
                if ((f[0][2] == 0 && r[0][0] == 2 && u[2][2] == 5) || (f[0][2] == 2 && r[0][0] == 0 && u[2][2] == 5)) {
                    Upper();
                    while (d[0][0] != 5 || l[2][2] != 2 || f[2][0] != 0) {
                        Front();
                        Upper();
                        FrontAgainst();
                        UpperAgainst();
                    }
                }
                if ((f[0][2] == 2 && r[0][0] == 1 && u[2][2] == 5) || (f[0][2] == 1 && r[0][0] == 2 && u[2][2] == 5)) {
                    Upper();
                    Upper();
                    while (d[2][0] != 5 || b[0][0] != 1 || l[2][0] != 2) {
                        Left();
                        Upper();
                        LeftAgainst();
                        UpperAgainst();
                    }
                }
            }

            if (r[0][0] == 5) {
                if ((f[0][2] == 3 && u[2][2] == 1 && r[0][0] == 5) || (f[0][2] == 1 && u[2][2] == 3 && r[0][0] == 5)) {
                    UpperAgainst();
                    while (d[2][2] != 5 || r[2][2] != 3 || b[0][2] != 1) {
                        Back();
                        Upper();
                        BackAgainst();
                        UpperAgainst();
                    }
                }
                if ((f[0][2] == 3 && u[2][2] == 0 && r[0][0] == 5) || (f[0][2] == 0 && u[2][2] == 3 && r[0][0] == 5)) {
                    while (d[0][2] != 5 || f[2][2] != 0 || r[2][0] != 3) {
                        Right();
                        Upper();
                        RightAgainst();
                        UpperAgainst();
                    }
                }
                if ((f[0][2] == 0 && u[2][2] == 2 && r[0][0] == 5) || (f[0][2] == 2 && u[2][2] == 0 && r[0][0] == 5)) {
                    Upper();
                    while (d[0][0] != 5 || l[2][2] != 2 || f[2][0] != 0) {
                        Front();
                        Upper();
                        FrontAgainst();
                        UpperAgainst();
                    }
                }
                if ((f[0][2] == 2 && u[2][2] == 1 && r[0][0] == 5) || (f[0][2] == 1 && u[2][2] == 2 && r[0][0] == 5)) {
                    Upper();
                    Upper();
                    while (d[2][0] != 5 || b[0][0] != 1 || l[2][0] != 2) {
                        Left();
                        Upper();
                        LeftAgainst();
                        UpperAgainst();
                    }
                }
            }

            if ((f[2][2] == 5 && r[2][0] == 3 && d[0][2] == 0) || (f[2][2] == 5 && r[2][0] == 0 && d[0][2] == 3) ||
                (f[2][2] == 3 && r[2][0] == 5 && d[0][2] == 0) || (f[2][2] == 0 && r[2][0] == 5 && d[0][2] == 3) ||
                (f[2][2] == 3 && r[2][0] == 0 && d[0][2] == 5)) {
                while (d[0][2] != 5 || f[2][2] != 0 || r[2][0] != 3) {
                    Right();
                    Upper();
                    RightAgainst();
                    UpperAgainst();
                }
            }
            if ((b[0][2] == 5 && r[2][2] == 3 && d[2][2] == 1) || (b[0][2] == 5 && r[2][2] == 1 && d[2][2] == 3) ||
                (b[0][2] == 3 && r[2][2] == 5 && d[2][2] == 1) || (b[0][2] == 1 && r[2][2] == 5 && d[2][2] == 3) ||
                (b[0][2] == 3 && r[2][2] == 1 && d[2][2] == 5)) {
                while (d[2][2] != 5 || b[0][2] != 1 || r[2][2] != 3) {
                    Back();
                    Upper();
                    BackAgainst();
                    UpperAgainst();
                }
            }
            if ((b[0][0] == 5 && l[2][0] == 2 && d[2][0] == 1) || (b[0][0] == 5 && l[2][0] == 1 && d[2][0] == 2) ||
                (b[0][0] == 2 && l[2][0] == 5 && d[2][0] == 1) || (b[0][0] == 1 && l[2][0] == 5 && d[2][0] == 2) ||
                (b[0][0] == 2 && l[2][0] == 1 && d[2][0] == 5)) {
                while (d[2][0] != 5 || b[0][0] != 1 || l[2][0] != 2) {
                    Left();
                    Upper();
                    LeftAgainst();
                    UpperAgainst();
                }
            }
            if ((l[2][2] == 5 && f[2][0] == 0 && d[0][0] == 2) || (l[2][2] == 5 && f[2][0] == 2 && d[0][0] == 0) ||
                (l[2][2] == 0 && f[2][0] == 5 && d[0][0] == 2) || (l[2][2] == 2 && f[2][0] == 5 && d[0][0] == 0) ||
                (l[2][2] == 0 && f[2][0] == 2 && d[0][0] == 5)) {
                while (d[0][0] != 5 || l[2][2] != 2 || f[2][0] != 0) {
                    Front();
                    Upper();
                    FrontAgainst();
                    UpperAgainst();
                }
            }

            if ((d[0][2] == 5 && (f[2][2] != 0 && f[2][2] != 3)) || (d[0][2] == 5 && (r[2][0] != 0 && r[2][0] != 3))) {
                Right();
                Upper();
                RightAgainst();
                UpperAgainst();
            }
            if ((d[2][2] == 5 && (r[2][2] != 1 && r[2][2] != 3)) || (d[2][2] == 5 && (b[0][2] != 1 && b[0][2] != 3))) {
                Back();
                Upper();
                BackAgainst();
                UpperAgainst();
            }
            if ((d[2][0] == 5 && (b[0][0] != 1 && b[0][0] != 2)) || (d[2][0] == 5 && (l[2][0] != 1 && l[2][0] != 2))) {
                Left();
                Upper();
                LeftAgainst();
                UpperAgainst();
            }
            if ((d[0][0] == 5 && (f[2][0] != 0 && f[2][0] != 2)) || (d[0][0] == 5 && (l[2][2] != 0 && l[2][2] != 2))) {
                Front();
                Upper();
                FrontAgainst();
                UpperAgainst();
            }
        }
        cout << "First face end" << endl;
        print();
        int pred = -1;
        while (f[1][0] != 0 || f[1][2] != 0 || r[1][0] != 3 || r[1][2] != 3 || b[1][2] != 1 || b[1][0] != 1 || l[1][0] != 2 || l[1][2] != 2) {
            count = 0;
            pred = -1;
            while (count > pred) {
                pred = count;
                if (f[0][1] == 0 || r[0][1] == 0 || b[2][1] == 0 || l[0][1] == 0) {
                    while (f[0][1] != 0) {
                        Upper();
                    }
                    if (u[2][1] == 3) {
                        count++;
                        Upper();
                        Right();
                        Upper();
                        RightAgainst();
                        UpperAgainst();
                        FrontAgainst();
                        UpperAgainst();
                        Front();
                        Upper();
                    } else {
                        if (u[2][1] == 2) {
                            count++;
                            UpperAgainst();
                            LeftAgainst();
                            UpperAgainst();
                            Left();
                            Upper();
                            Front();
                            Upper();
                            FrontAgainst();
                            UpperAgainst();
                        }
                    }
                }
                //2 ребра есть кубик вставили
                if (f[0][1] == 3 || r[0][1] == 3 || b[2][1] == 3 || l[0][1] == 3) {
                    while (r[0][1] != 3) {
                        Upper();
                    }
                    if (u[1][2] == 1) {
                        count++;
                        Upper();
                        Back();
                        Upper();
                        BackAgainst();
                        UpperAgainst();
                        RightAgainst();
                        UpperAgainst();
                        Right();
                        Upper();
                    } else {
                        if (u[1][2] == 0) {
                            count++;
                            UpperAgainst();
                            FrontAgainst();
                            UpperAgainst();
                            Front();
                            Upper();
                            Right();
                            Upper();
                            RightAgainst();
                            UpperAgainst();
                        }
                    }
                }
                // уже 4 ребра есть
                if (f[0][1] == 1 || r[0][1] == 1 || b[2][1] == 1 || l[0][1] == 1) {
                    while (b[2][1] != 1) {
                        Upper();
                    }
                    if (u[0][1] == 2) {
                        count++;
                        Upper();
                        Left();
                        Upper();
                        LeftAgainst();
                        UpperAgainst();
                        BackAgainst();
                        UpperAgainst();
                        Back();
                        Upper();
                    } else {
                        if (u[0][1] == 3) {
                            count++;
                            UpperAgainst();
                            RightAgainst();
                            UpperAgainst();
                            Right();
                            Upper();
                            Back();
                            Upper();
                            BackAgainst();
                            UpperAgainst();
                        }
                    }
                }
                // уже 6 ребер есть
                if (f[0][1] == 2 || r[0][1] == 2 || b[2][1] == 2 || l[0][1] == 2) {
                    while (l[0][1] != 2) {
                        Upper();
                    }
                    if (u[1][0] == 0) {
                        count++;
                        Upper();
                        Front();
                        Upper();
                        FrontAgainst();
                        UpperAgainst();
                        LeftAgainst();
                        UpperAgainst();
                        Left();
                        Upper();
                    } else {
                        if (u[1][0] == 1) {
                            count++;
                            UpperAgainst();
                            BackAgainst();
                            UpperAgainst();
                            Back();
                            Upper();
                            Left();
                            Upper();
                            LeftAgainst();
                            UpperAgainst();
                        }
                    }
                }
                //обработали и постарались поставить 8 ребер сверху
            }
            // доставим ребра из второго ряда
            if (f[1][2] != 0) {
                Right();
                Upper();
                RightAgainst();
                UpperAgainst();
                FrontAgainst();
                UpperAgainst();
                Front();
                Upper();
            }
            if (r[1][2] != 3) {
                Back();
                Upper();
                BackAgainst();
                UpperAgainst();
                RightAgainst();
                UpperAgainst();
                Right();
                Upper();
            }
            if (b[1][0] != 1) {
                Left();
                Upper();
                LeftAgainst();
                UpperAgainst();
                BackAgainst();
                UpperAgainst();
                Back();
                Upper();
            }
            if (l[1][2] != 2) {
                Front();
                Upper();
                FrontAgainst();
                UpperAgainst();
                LeftAgainst();
                UpperAgainst();
                Left();
                Upper();
            }
        }
// собрано 2 нижних ряда

        while (u[1][0] != 4 || u[0][1] != 4 || u[1][2] != 4 || u[2][1] != 4) {
            if ((u[1][2] == 4 && u[0][1] == 4) || (u[0][1] == 4 && u[2][1] == 4)) {
                Left();
                Front();
                Upper();
                FrontAgainst();
                UpperAgainst();
                LeftAgainst();
            } else {
                if (u[1][2] == 4 && u[2][1] == 4) {
                    Back();
                    Left();
                    Upper();
                    LeftAgainst();
                    UpperAgainst();
                    BackAgainst();
                } else {
                    if (u[1][0] == 4 && u[2][1] == 4) {
                        Right();
                        Back();
                        Upper();
                        BackAgainst();
                        UpperAgainst();
                        RightAgainst();
                    } else {
                        Front();
                        Right();
                        Upper();
                        RightAgainst();
                        UpperAgainst();
                        FrontAgainst();
                    }
                }
            }
        }
//желтый крест собран
        int proverka = 0;
        if (f[0][1] == 0 && r[0][1] == 3 && b[2][1] == 1 && l[0][1] == 2) {
            proverka = 1;
        } else {
            Upper();
            if (f[0][1] == 0 && r[0][1] == 3 && b[2][1] == 1 && l[0][1] == 2) {
                proverka = 1;
            } else {
                Upper();
                if (f[0][1] == 0 && r[0][1] == 3 && b[2][1] == 1 && l[0][1] == 2) {
                    proverka = 1;
                } else {
                    Upper();
                    if (f[0][1] == 0 && r[0][1] == 3 && b[2][1] == 1 && l[0][1] == 2) {
                        proverka = 1;
                    }
                }
            }
        }
//проверили на правильный желтый крест
        if (proverka == 0) {
            while (f[0][1] != 0 || r[0][1] != 3 || b[2][1] != 1 || l[0][1] != 2) {
                Upper();
                if (r[0][1] == 3 && b[2][1] == 1) {
                    Right();
                    Upper();
                    RightAgainst();
                    Upper();
                    Right();
                    Upper();
                    Upper();
                    RightAgainst();
                    Upper();
                    break;
                }
                if (r[0][1] == 3 && f[0][1] == 0) {
                    Front();
                    Upper();
                    FrontAgainst();
                    Upper();
                    Front();
                    Upper();
                    Upper();
                    FrontAgainst();
                    Upper();
                    break;
                }
                if (f[0][1] == 0 && l[0][1] == 2) {
                    Left();
                    Upper();
                    LeftAgainst();
                    Upper();
                    Left();
                    Upper();
                    Upper();
                    LeftAgainst();
                    Upper();
                    break;
                }
                if (l[0][1] == 2 && b[2][1] == 1) {
                    Back();
                    Upper();
                    BackAgainst();
                    Upper();
                    Back();
                    Upper();
                    Upper();
                    BackAgainst();
                    Upper();
                    break;
                }
                if (r[0][1] == 3 && l[0][1] == 2) {
                    Back();
                    Upper();
                    BackAgainst();
                    Upper();
                    Back();
                    Upper();
                    Upper();
                    BackAgainst();
                }
                if (f[0][1] == 0 && b[2][1] == 1) {
                    Right();
                    Upper();
                    RightAgainst();
                    Upper();
                    Right();
                    Upper();
                    Upper();
                    RightAgainst();
                }
            }
        }
//правильный желтый крест сделан
        int check = 0;
        int stop = 0;



        while (!cornerCheck()) {
            if ((u[2][2] == 4 && f[0][2] == 0 && r[0][0] == 3) || (u[2][2] == 4 && f[0][2] == 3 && r[0][0] == 0) ||
                (u[2][2] == 0 && f[0][2] == 4 && r[0][0] == 3) || (u[2][2] == 0 && f[0][2] == 3 && r[0][0] == 4) ||
                (u[2][2] == 3 && f[0][2] == 0 && r[0][0] == 4) || (u[2][2] == 3 && f[0][2] == 4 && r[0][0] == 0)) {
                while (!cornerCheck()) {
                    Upper();
                    Right();
                    UpperAgainst();
                    LeftAgainst();
                    Upper();
                    RightAgainst();
                    UpperAgainst();
                    Left();
                }
            } else {
                if ((f[0][0] == 0 && l[0][2] == 2 && u[2][0] == 4) || (f[0][0] == 0 && l[0][2] == 4 && u[2][0] == 2) ||
                    (f[0][0] == 2 && l[0][2] == 4 && u[2][0] == 0) || (f[0][0] == 2 && l[0][2] == 0 && u[2][0] == 4) ||
                    (f[0][0] == 4 && l[0][2] == 2 && u[2][0] == 0) || (f[0][0] == 4 && l[0][2] == 0 && u[2][0] == 2)) {
                    while (!cornerCheck()) {
                        Upper();
                        Front();
                        UpperAgainst();
                        BackAgainst();
                        Upper();
                        FrontAgainst();
                        UpperAgainst();
                        Back();
                    }
                } else {
                    if ((u[0][2] == 4 && r[0][2] == 3 && b[2][2] == 1) || (u[0][2] == 4 && r[0][2] == 1 && b[2][2] == 3) ||
                        (u[0][2] == 3 && r[0][2] == 4 && b[2][2] == 1) || (u[0][2] == 3 && r[0][2] == 1 && b[2][2] == 4) ||
                        (u[0][2] == 1 && r[0][2] == 3 && b[2][2] == 4) || (u[0][2] == 1 && r[0][2] == 4 && b[2][2] == 3)) {
                        while (!cornerCheck()) {
                            Upper();
                            Back();
                            UpperAgainst();
                            FrontAgainst();
                            Upper();
                            BackAgainst();
                            UpperAgainst();
                            Front();
                        }
                    } else {
                        if ((u[0][0] == 4 && b[2][0] == 1 && l[0][0] == 2) || (u[0][0] == 4 && b[2][0] == 2 && l[0][0] == 1) ||
                            (u[0][0] == 2 && b[2][0] == 1 && l[0][0] == 4) || (u[0][0] == 2 && b[2][0] == 4 && l[0][0] == 1) ||
                            (u[0][0] == 1 && b[2][0] == 4 && l[0][0] == 2) || (u[0][0] == 1 && b[2][0] == 2 && l[0][0] == 4)) {
                            while (!cornerCheck()) {
                                Upper();
                                Left();
                                UpperAgainst();
                                RightAgainst();
                                Upper();
                                LeftAgainst();
                                UpperAgainst();
                                Right();
                            }
                        } else {
                            while (!oneCornerCheck()) {
                                Upper();
                                Right();
                                UpperAgainst();
                                LeftAgainst();
                                Upper();
                                RightAgainst();
                                UpperAgainst();
                                Left();
                            }
                        }
                    }
                }
            }
        }
//правильно стоят углы

        if (u[0][2] != 4) {
            while (u[0][2] != 4) {
                Back();
                RightAgainst();
                BackAgainst();
                Right();
            }
        }
        Upper();
        if (u[0][2] != 4) {
            while (u[0][2] != 4) {
                Back();
                RightAgainst();
                BackAgainst();
                Right();
            }
        }
        Upper();
        if (u[0][2] != 4) {
            while (u[0][2] != 4) {
                Back();
                RightAgainst();
                BackAgainst();
                Right();
            }
        }
        Upper();
        if (u[0][2] != 4) {
            while (u[0][2] != 4) {
                Back();
                RightAgainst();
                BackAgainst();
                Right();
            }
        }
        while (!isComplete()) {
            Upper();
        }


    }
}