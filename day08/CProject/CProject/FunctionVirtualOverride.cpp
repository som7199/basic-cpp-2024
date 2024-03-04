#include <iostream>
/*
가상함수의 선언은 virtual 키워드의 선언을 통해 이뤄진다.
가상함수가 선언되고 나면, 이 함수를 오버라이딩 하는 함수도 가상함수가 된다!
*/
using namespace std;

class First
{
public:
    virtual void MyFunc()       // First 클래스의 MyFunc 함수가 virtual로 선언되었으니 Second, Third 클래스의 MyFunc 함수에 굳이 virtual 키워드 추가 안해도 가상함수가 된다. 그치만 virtual 선언을 넣어서 가상함수임을 알리자!
    {
        cout << "FirstFunc" << endl;
    }
};

class Second : public First

{
public:
    virtual void MyFunc()   //오버라이딩 재정의 MyFunc 
    {
        cout << "SecondFunc" << endl;
    }
};

class Third : public Second
{
public:
    virtual void MyFunc()
    {
        cout << "ThirdFunc" << endl;
    }
};

int main(void)
{
    Third* tptr = new Third();
    Second* sptr = tptr;
    First* fptr = sptr;
    /*
    객체포인터 타입을 기준으로 접근 범위가 결정된다.
    오버라이딩된 경우는 부모것은 자식것으로 가려진다.
    */
    fptr->MyFunc();
    sptr->MyFunc();
    tptr->MyFunc();

    cout << endl;
    tptr->Second::MyFunc();
    delete tptr;
    return 0;
}