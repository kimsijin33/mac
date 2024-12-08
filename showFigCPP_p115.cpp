

void Myoutput(int a)
[
    cout << "정수형 인수" << endl;
]

void Myoutput(int * p)
{
    cout << "포인터형 인수" << endl;
}

/*
int main()
{
    Myoutput(null); // 인수에 NULL을 지정하여 호출하면 포인터형이 아닌 int형의 인수를 갖는 형태의 함수가 호출
    return 0;
};
*/

int main()
{
    Myoutput(nullptr); // Myoutput(int *p) 이 호출도비니다.
    return 0;
}