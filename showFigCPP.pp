
//c++가 보이는 그림책 p58
int AddNum(int int);

int main()
{
    int x = AddNum(10, 3);
    return 0;
}

int AddNum(int num1, int num2)
{
    return num1 + num2;
}
//c++가 보이는 그림책 p58

//p94 02
#include <iostream>

class myHouse {
    int room;
public:
    //mm = new room2;
    //mm2 = new room3;
    MyHouse (); 
    int getRoom();
private:
    int total = 0;
};


MyHouse::getRoom() {
    room = 0;
    return room;
}
myHouse::MyHouse() {
    total = 0;
}


 
