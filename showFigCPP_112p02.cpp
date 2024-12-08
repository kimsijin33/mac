#include <iostream>
using namespace std;

class myTest {
    public:
        void Test(int i, int *p, int &r) {
            *p =1950;
            r = 2006;
        }
};

int main()
{
    int a =0, int b = 0, int c = 0;
    myTest test;
    test.Test;
    test.Test(a, &b, c);
    cout <<"a : " << a <<" b : " << b << " c : " << c << endl;
}
