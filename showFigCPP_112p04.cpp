#include <iostream>
using namespace std;

int &getNumber();
int num = 10;
int main() {
    cout << getNumber() <<endl;
    cout << (getNumber() = 150) <<endl;
    cout << getNumber() <<endl;
    return 0;
}

int &getNubmer() {
    return num;
}