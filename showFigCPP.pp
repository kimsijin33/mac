
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

//p94 04
#include <iostream>

namespace Book {
	namespace Title 
	{	
		char * title;
	}
}

char * title;

int main()
{
	title = "CANDY";
	title = "COOKIE";
	std::cout<< title << "와" << title << std::endl;
	return 0;
}
//p40
in main()
{
	OrangeBox myOrangeBox;

	myOrangeBox.Empty()
	myOrangeBox.Add(5);

	return 0;
}

class orangebox{

private:
	int total = 0;
};

//p41
class OrangeBox {
public:
	OrangeBox();

};

OrangeBox::OrangeBox()
{
	tatal = 0;
}

int main()
{
	OrangeBox myOragneBox
}

//p42
class OrangeBox {
public:
	OrangeBox();
	~OrangeBox();
};

OrangeBox::~OrangeBox()
{
	printf("오렌지 상자 오브젝트 임무 완료\n");
}

int main()
{
	OrangeBox myOrangeBox;

	myOrangeBox.Add(5);
	printf("상자 속의 오렌지 : %d개\n",myOrangeBox.GetTotal());
	return 0;
}

