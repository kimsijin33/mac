#include <iostream>
using namespace std;

class myTest{
    public:
        void swap1(int *x, int *y) { //참조에 의한 전달
            int imsi = x;
            x = y;
            y = imsi;

        }

        void swap2(int x, int y) { //값에 의한 전달
            int imsi2 = x;
            x = y;
            y = imsi2;           
        }
};

int main()
{
    int a =50, int b = 100;
    myTest test;
    test.swap1(a, b);
    cout << "swap1 : x = " << a << " y = " << b <<endl;

    int a2 =50, int b2 = 100;
    test.swap2(a, b);
    cout << "swap1 : x = " << a2 << " y = " << b2 <<endl;
}