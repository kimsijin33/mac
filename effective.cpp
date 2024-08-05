
void makeUpperCase(char *s) //function definition
{
	unsigned length = strlen(s);
	for (unsigned i = 0; i < length; i++)
		s[i] = toupper(s[i]);
}

//p5
class A {
public:
	A();
};
A arrayA[10];

class B {
public:
	B(int x = 0);
};
B arrayB[10];

class C {
public:
	C(int x);
};
C arrayC[10];


//p5 bellow
C *ptrArray[10];

ptrArray[0] = new C(22);
ptrArray[1] = new C(4);


//p6 top
class String {
private:
	car *data;

public:
	String(char *value = 0);
	String(const String& x);
};

String s1
String s2(s1);
String s3 = s2;
;

String operator+(String s1, String s2)
{
	String temp;
	temp.data = new char[strlen(s1.data) + strlen(s2.data) + 1];
	strcpy(temp.data, s1.data);
	strcat(temp.data, s2.data);

	return temp;
}

String a("Hello");
String b(" world");
String c = a + b;

//p7
String s1;

