
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

//p45
void OrangeBox::Add(int addOrange)
{
	total += addOrange;
	if(total > 100) total = 100;
}

//p46
OrangeBox myOrangeBox;
myOrangeBox.total = 10;

myOrangeBox.total = 30;

myOrangeBox.total = 50;

//p47
void OrangeBox::Add(int addOrange)
{
	total += addOrange;
}

void OrangeBox::Del(int delOrange)
{
	total -= delOrange;
}

void OrangeBox::Add(int addOrange)
{
	total += addOragne * 50;
}

void OrangeBox::Del(int delOrange)
{
	total -= delOragne * 50;
}

//p97
#define MAX(a, b) { (a) > (b) ? (a) : (b) }

inline int MaxFunc(int a, int b) {
	if( a > b ) return a;
	return b;
}

int x1 = 10, y1 = 15;
int n1 = MAX(x1++, y1++);
cout << "x1 = " << x1 << "y1 = " << y1 << endl;

int x2 = 10, y2 = 15;
int n2 = MaxFunc(x2++, y2++);
cout << "x2 - " << x2 << "y2 = " << y2 << endl;

//p102
int num;
int &newnum = num;

//2
newnum = 13;
cout << "num = " << num << endl;
cout << "newnum = " << newnum << endl;

//3
int num;
int *newnum = &num;

*newnum = 400;

//p103
#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int &newnum = num;

	num = 200;
	cout << "num = " << num << endl;
	cout << "newnum = " << newnum << endl;
	
	newnum = 400;
	cout << "num = " << num << endl;
	cout << "newnum = " << newnum << endl;
	return 0;
}

//p104
double Addnum(double &a, double &b)
{
    return a + b;
}

double num1 = 10.5, num2 = 20.5;
double ans = Addnum(num1, num2);

