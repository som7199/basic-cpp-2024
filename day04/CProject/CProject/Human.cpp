#include <iostream>
#include "human.h"
using namespace std;

class Human {
private:
	const char name[20];
	int age;
	const char job;
public:
	Human(const char* name, int age, const char* job) : age(age) {
		strcpy(myname, name);
		strcpy(myjob, job);
		cout << "���� " << age << "���� " << job << "�Դϴ�." << endl;
	}

	void humanInfo()
	{
		// ...
	}
}
int main(void)
{
	Human h1("��ҹ�", 24, "���ػ�");
	h1.humanInfo();
	return 0;
}