
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

//p105
#include <iostream>
using namespace std;

void Changevalue (double &a)
{
	a = 200;
}

int main()
{
	double num1 = 100;
	cout << "num1 " << num1 << endl;
	Changevalue(num1);
	cout << "num1 = " << num1 << endl;
	return 0;
}

//p106
void Keepvalue(const double &a);

#include <iostream>
using namespace std;

void Keepvalue(const double &a)
{
	a = 200;
}

int main()
{
	double num1 = 100;
	Keepvalue(num1);
	return 0;
}

//p107
#include <iostream>
using namespace std;

struct Person {
	char name[50];
	int age;
};

void PrintPersonRef(const Person &psn)
{
	cout << psn.name << "씨" << psn.age << "세" << endl;
}

void PrintPersonPtr(const Person *psn)
{
	cout << psn->name << "씨 " << psn->age << "세 " << endl;
}

int main()
{
	Person shain1 = { "Juhyun", 18};

	PrintPersonRef(shain1);
	PrintPersonPtr(&shain1);
	return 0;
}

//p108
struct Person {
	char name[50]
	int age;
};

void PrintPersonRef(Person *psn);
void PrintPersonPtr(Person &psn);
void PrintPersonVal(Person psn);

int main()
{

	PrintPersonRef(shain1);
	PrintPersonPtr(&shain1);
	PrintPersonVal(shain1);

//p110
#include <iostream>
#include <string.h>

using namespace std;

classs Student {	//학생 클래스
public:
	void SetID(int num) { id = num; }
	void SetName(char *str) {
		strcpy(name, str);
	}
	int GetID( ) { return id; }
	char *GetName ( ) const {
	}
private:
	int id;	//학생 ID
	char name[30]	//이름
};

enum Subjects { Math, English, Science };
public:
	void SetInfo(int id, char *name, Subjects s, int num);
	int GetPoint() const { return point;}
	void GetResult(char *buf) const;

	Student student;

pritvate:
	Subjects subject; //과목
	int point;
};

void Exam::SetInfo(int id, char *name, Subjects s, int num)
{
	student.SetID(id);
	student.SetName(name);
	subject = s;
	point = num;
}

void Exam::GetResult(char *buf) const
{
	char *subname[] = { "수학", "영어", "과학" };
	sprintf(buf, "%s : %d점", subnmae[subject], point );
}

void PrintResult(const Exam &Exam)
{
	cout << Exam.student.GetName() << endl;
	char buf(30);
	Exam.GetResult(buf);
	cout << buf << endl;
}

double GetAvg(const Exam *Exam, int num) //평균값을 구한다.
{
	double sum = 0;
	for(int i=0; i < num; i++) {
		sum += Exam[i].GetPoint();
	}
	return sum / num;
}

int main()
{
	Exam Exam[3]
	Exam[0].SetInfo( 1, "홍길동", Math, 60);
	Exam[1].SetInfo( 1, "홍길동", English, 75);  
	Exam[2].SetInfo( 1, "홍길동", Science, 88);

	PrintResult( Exam[0] );
	PrintResult( Exam[1] );
	PrintResult( Exam[2] );
	cout << endl;
	cout << "" << GetAVg(Exam, 3) << "" << endl;
	return 0;
}

