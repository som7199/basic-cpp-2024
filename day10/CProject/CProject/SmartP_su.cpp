#include <iostream>

class MyClass 
{
	int* ptr;
public: 
	MyClass(int p) : ptr(new int[100])
	{
		printf("������ ȣ��\n");
	}
	~MyClass()
	{
		printf("�Ҹ��� ȣ��\n");
		delete[] ptr;
	}
};

int main(void)
{
	MyClass* m1 = new MyClass(10);
	std::cout << "==============================" << std::endl;	// �Ҹ��ڰ� ȣ�� �� ��

	std::unique_ptr<MyClass> m2(new MyClass(20));	// unique_ptr ����Ʈ ������ -> �Ҹ��� ȣ��


	return 0;
}