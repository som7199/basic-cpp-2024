#include <iostream>
/*
C++ Ÿ���� ����ü : ����ü ����� ��� ������ ��� �Լ��� ������.
*/

typedef struct human {		// human ����ü(���� ���� ����� ���� �ڷ���)
	char name[20];			// �Ӽ� : �������(name, age, job)
	int age;
	char job[20];

	void showHuman()	// ��� : ��� �Լ�
	{
		printf("name : %s age : %d job : %s\n", name, age, job);
	}

}Human;						// ������ human ����ü�� Human���� ����ϰڴ�.

int main(void)
{
	int a = 10;
	human h1 = { "ȫ�浿", 50, "����" };		// Human Ÿ���� ������ �����ϰ� �ʱ�ȭ ��Ű��
	h1.showHuman();
	return 0;
}