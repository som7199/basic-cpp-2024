#include <iostream>
using namespace std;

template <typename T>
T Add(T num1, T num2)
{
	return num1 + num2;
}

int main(void)
{
    // �������� �Ǽ����� ��� �޾Ƽ� ������ �����ϴ� ���ø� �Լ��� ȣ���Ͽ� ���
	cout << Add<int>(15, 20) << endl;
	cout << Add<double>(2.9, 3.7) << endl;
	cout << Add<int>(3.2, 3.2) << endl;
	cout << Add<double>(3.14, 2.75) << endl;
	return 0;
}

/*
1. template <typename T>:
    -> ���ø� �Լ��� ����η�, ���ø� �Ű����� T�� ����Ͽ� �Ϲ�ȭ�� �Լ��� ����.

2. T Add(T num1, T num2):
    -> ���ø� �Լ��� ���Ǻη�, ���ø� �Ű����� T�� ���� �� ���ڸ� ���� ���� ��ȯ.

3 .int main(void):
    -> ���α׷��� ������ ��Ÿ���� main �Լ��� ���Ǻη�, ���ø� �Լ��� ȣ���Ͽ� �پ��� �ڷ����� ������ ������.

4. cout << Add(15, 20) << endl;:
    -> Add �Լ��� ȣ���Ͽ� ������ �� ���� ���� ����� �����.
        -> ���⼭ Add<int>�� ���� ���ø� ���ڸ� ���������� �������� �ʾƵ�, �����Ϸ��� �ڵ����� Ÿ���� �߷��Ͽ� ȣ����.

5. cout << Add(2.9, 3.7) << endl;:
    -> �Ǽ��� �� ���� ���� ����� �����.
        -> ���������� ���ø� ���ڸ� ���������� �������� �ʾƵ�, �����Ϸ��� Ÿ���� �߷��Ͽ� ȣ����.

6. cout << Add(3.2, 3.2) << endl;:
    -> �������� �Ǽ����� ȥ���Ͽ� ������ �õ���.
        -> C++������ Ÿ���� ��ġ��Ű�� �ʰ� ȥ���Ͽ� ����� �� ������, ����� ������ �� ����.
            -> �� ��쿡�� ���������� �ؼ��Ǿ� 6�� �����.

7.cout << Add(3.14, 2.75) << endl;:
    -> �Ǽ��� �� ���� ���� ����� ����Ѵ�.
        -> �ε� �Ҽ��� �������� ���� ���� ����� 5.89�� �����.
*/