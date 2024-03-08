#include <iostream>
#include <cstring>
/*
�Լ� ���ø��� Ư��ȭ
*/
using namespace std;

template <typename T>
T Max(T a, T b)
{
	return a > b ? a : b;
}

// �Լ� ���ø� Max�� char* ���� ���� Ư��ȭ - ���ڿ� ���� ��
template <>
char* Max(char* a, char* b)
{
	cout << "char* Max<char*>(char* a, char* b)" << endl;
	return strlen(a) > strlen(b) ? a : b;
}

// �Լ� ���ø� Max�� const char* ���� ���� Ư��ȭ - ���� ���� ���� ��
template <>
const char* Max(const char* a, const char* b)
{
	cout << "const char* Max<const char*>(const char* a, const char* b)" << endl;
	return strcmp(a, b) > 0 ? a : b;
}

int main(void)
{
	cout << Max(11, 15) << endl;
	cout << Max('T', 'Q') << endl;			// ���� ��(���ĺ� ����)
	cout << Max(3.5, 7.5) << endl;
	cout << Max("Simple", "Best") << endl;	// ���ڿ��� �������� ���� ��ȯ�Ǵ� �ּ� ���� ���������� const char* �̴�! => const char* Max(const char* a, const char* b) �Լ� ȣ���!

	char str1[] = "Simple";					// str1, str2�� ������ ���·� ����� => ���������� char* �̴�
	char str2[] = "Best";
	cout << Max(str1, str2) << endl;		// => char* Max(char* a, char* b) �Լ��� ȣ���!
	return 0;
}