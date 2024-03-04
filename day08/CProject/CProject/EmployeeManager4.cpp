#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
/*
함수가 가상함수로 선언되면, 해당 함수 호출 시 포인터의 자료형을 기반으로 호출대상을 결정하지 않고,
포인터 변수가 실제로 가리키는 객체를 참조하여 호출의 대상을 결정한다!!
*/
class Employee
{
private:
	char name[100];
public:
	Employee(const char* name)
	{
		strcpy(this->name, name);
	}
	void ShowYourName() const
	{
		cout << "name : " << name << endl;
	}
	virtual int GetPay() const
	{
		return 0;
	}
	virtual void ShowSalaryInfo() const
	{ }
};

class PermanentWorker : public Employee
{
private:
	int salary;		// 월 급여
public:
	PermanentWorker(const char* name, int money) : Employee(name), salary(money)
	{ }
	int GetPay() const
	{
		cout << "PermanentWorker의 GetPay()" << endl;
		return salary;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}
};

class TemporaryWorker : public Employee
{
private:
	int workTime;		// 이 달에 일한 시간의 합계
	int payPerHour;		// 시간당 급여
public:
	TemporaryWorker(const char* name, int pay) : Employee(name), workTime(0), payPerHour(pay)
	{ }
	void AddWorkTime(int time)	// 일한 시간의 추가
	{
		workTime += time;
	}
	int GetPay() const			// 이 달의 급여
	{
		return workTime * payPerHour;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}
};

class SalesWorker : public PermanentWorker
{
private:
	int salesResult;	// 월 판매실적
	double bonusRatio;	// 상여금 비율
public:
	SalesWorker(const char* name, int money, double ratio) : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
	{ }
	void AddSalesResult(int value)
	{
		salesResult += value;
	}
	int GetPay() const
	{
		cout << "SalesWorker의 GetPay()" << endl;								// 오버라이딩된 멤버 함수는 자식것이 실행된다.
		return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);		// 따라서 재정의된 부모것을 호출하려면 ::연산자로 접근!(소속을 표시), PermanentWorker의 GetPay 함수 호출
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;						// SalesWorker의 GetPay 함수 호출
	}
};

class EmployeeHandler
{
private:
	Employee* empList[50];		// Employee 객체의 주소값을 저장하는 방식으로 객체 저장, 따라서 Employee 클래스를 상속하는 클래스의 객체도 이 배열에 저장 가능!!!!!!!!!
	int empNum;
public:
	EmployeeHandler() : empList(), empNum(0)	// empList() - nullptr 초기화 == empList{}
	{ }
	void AddEmployee(Employee* emp)	// Employee 객체의 주소값 전달, 따라서 Employee 클래스를 상속하는 PermanentWorker 객체의 주소값도 전달 가능!!!!!
	{
		empList[empNum++] = emp;
	}
	// EmployeeManager3.cpp 에서 주석처리 해놨던 부분
	// 배열을 구성하는 포인터 변수가 Employee형 포인터 변수이므로, Employee 클래스의 멤버가 아닌 GetPay함수와 ShowSalaryInfo함수의 호출 부분에서 컴파일 에러가 나서 주석 처리해놨음
	// Employee 클래스에 GetPay 함수와 ShowSalaryInfo 함수를 추가로 정의하고, 가상함수로 선언했음!!!!! 그래서 접근 가능!
	// 이젠 SalesWorker  클래스에서 오버라이딩된 GetPay 함수와 ShowSalaryInfo 함수가 호출될 것!
	void ShowAllSalaryInfo() const
	{
		for(int i = 0; i < empNum; i++)
			empList[i] -> ShowSalaryInfo();			// ShowSalaryInfo 함수는 가상함수이므로 가장 마지막에 오버라이딩을 진행한 함수가 호출된다.
	}
	void ShowTotalSalaryInfo() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();			// GetPay 함수는 가상함수이므로 가장 마지막에 오버라이딩을 진행한 함수가 호출된다.
		cout << "salary sum : " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main(void)
{
	// 직원 관리를 목적으로 설계된 컨트롤 클래스의 객체 생성
	EmployeeHandler handler;

	// 정규직 등록
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));

	// 임시직 등록
	TemporaryWorker* alba = new TemporaryWorker("JUNG", 700);
	alba->AddWorkTime(5);			// 5시간 일한 결과 등록
	handler.AddEmployee(alba);

	// 영업직 등록
	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000);	// 영업실적 7000
	handler.AddEmployee(seller);

	// 이번 달에 지불해야 할 급여의 정보
	handler.ShowAllSalaryInfo();

	// 이번 달에 지불해야 할 급여의 총합
	handler.ShowTotalSalaryInfo();

	//SalesWorker s("Hong", 1000, 0.1);
	//cout << s.GetPay() << endl;		// SalesWorker 클래스의 GetPay() 호출
	//s.ShowSalaryInfo();
	return 0;
}