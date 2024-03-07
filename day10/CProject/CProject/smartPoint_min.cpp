
#include <iostream>

class MyClass {
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
    MyClass* m1 = new MyClass(10);               // �Ҹ��ڰ� ȣ����� �ʴ� ������ �߻��Ѵ�.
    std::cout << "============================================================" << std::endl;

    std::unique_ptr<MyClass>m2(new MyClass(20)); // ����Ʈ ������(unique_ptr<MyClass>) ���¸� ���� �Ҹ��ڰ� ȣ����� �ʴ� ������ �ذ�

    return 0;
}
