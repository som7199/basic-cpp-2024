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
		cout << "나는 " << age << "세인 " << job << "입니다." << endl;
	}

	void humanInfo()
	{
		// ...
	}
}
int main(void)
{
	Human h1("김소민", 24, "취준생");
	h1.humanInfo();
	return 0;
}