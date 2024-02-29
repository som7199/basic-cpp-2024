#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Computer
{
private:
	char owner[50];
public:
	Computer(const char* name)
	{
		cout << "Computer 생성자" << endl;
		strcpy(owner, name);
	}
	void Calculate()
	{
		cout << "요청 내용을 계산합니다." << endl;
	}
};

class NotebookComp : public Computer
{
private:
	int Battery;
public:
	NotebookComp(const char* name, int initChag) : Computer(name), Battery(initChag) { 
		cout << "NotebookComp 생성자" << endl;
	}
	void Charging() { Battery += 5; }
	void UseBattery() { Battery -= 1; }
	void MovingCal()
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "충전이 필요합니다." << endl;
			return;
		}
		cout << "이동하면서 ";
		Calculate();
		UseBattery();
	}
	int GetBatteryInfo() { return Battery; }
};

class TabletNotebook : public NotebookComp
{
private: 
	char regstPenModel[50];
public:
	TabletNotebook(const char* name, int initChag, const char* pen) : NotebookComp(name, initChag)
	{
		cout << "TabletNotebook 생성자" << endl;
		strcpy(regstPenModel, pen);
	}
	void Write(const char* penInfo)
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "충전이 필요합니다." << endl;
			return;
		}

		if(strcmp(regstPenModel, penInfo) != 0)
		{
			cout << "등록된 펜이 아닙니다.";
			return;
		}
		cout << "필기 내용을 처리합니다." << endl;
		UseBattery();
	}
};

int main(void)
{
	NotebookComp nc("이수종", 5);
	TabletNotebook tn1("정수영", 5, "ISE-241-242");
	TabletNotebook tn2("강민경", 2, "ISE-241-242");
	nc.MovingCal();
	tn1.Write("ISE-241-242");
	tn2.Write("ISA-132-133");
	return 0;
}