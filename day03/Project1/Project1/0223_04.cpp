#include <iostream>
#include <string.h>
#include <cstdlib> // <stdlib.h> ��� <cstdlib> ����� ���
#define _CRT_SECURE_NO_WARNINGS
/*
��ü�� ���� => �� ������ ��ü ������!
*/
using namespace std;

class Simple {
public:
    Simple()        // ������(Ŭ���� �̸��� ���� �޼���)
    {
        cout << "I'm simple constructor!" << endl;
    }
};

int main(void) {

    cout << "case 1: ";
    Simple* sp1 = new Simple;       // new �����ڸ� ���� ��ü ����
    // �� ������ Simple�̶�� ��ü ����
    // �� ��ü�� �ּҰ��� sp1�̶�� ������ ������ ����
    // Simple Ÿ���� sp1
    // ���ÿ� sp1 ������ ����, ������ Simple ��ü ������
    // ������ ���� sp1���� Simple ��ü�� ����

    cout << "case 2: ";
    Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);
    // malloc �Լ� ȣ���� ���� �� ������ ������ �Ҵ�
    // ????????????????
    // �ϴ� new - delete / malloc - free �� ���� ��Ŀ��� ���̰� �ִٴϱ�
    // malloc�� �׳� �� ������ �޸� ������ �Ҵ� �޴°Ű�, new�� �޸� ���� �Ҵ�� ���ÿ� �����ڵ� ȣ��Ǵ°ǰ�?

    cout << endl << "end of main !" << endl;
    delete sp1;             // ��ü ��ȯ
    free(sp2);

    return 0;
}



