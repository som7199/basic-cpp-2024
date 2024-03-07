#include <iostream>
using namespace std;

int main(void)
{
	/*
	C - Style 
	���ڿ��� �������� �ι��ڰ� �ٴ´�!
	*/
	int code = 97;
	cout << code << endl;
	cout << (char)code << endl;
	cout << "=================" << endl;
	char arr[6] = { 'a', 'b', 'c', 'd', 'e' };		// ���ڿ� Ÿ���� �迭 ����
	cout << arr << endl;
	printf("=================\n");
	char arr1[] = { 'a', 'b', 'c', '\0', 'e'};		// \0 => �� ���� : ���ڿ��� ���� �˸�! ����� abc ������ �ȴ�.
	cout << arr1 << endl;
	cout << sizeof(arr1) << endl;					// ��ü ���� ũ�� => 5 ���
	cout << strlen(arr1) << endl;					// null ���� �ձ����� ũ�� => 3 ���
	printf("=================\n");
	char str[] = "string";							// �ڵ����� �ι��ڰ� �ٴ´�. @@@���ÿ����� �������
	cout << str << endl;
	cout << sizeof(str) << endl;					// �ι��ڰ� ���Ե� ũ�Ⱑ ����, ���� 7 ���!
	cout << strlen(str) << endl;					// 6 ���
	str[0] = 'S';
	cout << str << endl;
	printf("=================\n");
	const char* pstr = "STRING";					// @@@read-only ������ ������� -> ������ �Ұ���
	cout << pstr << endl;
	cout << sizeof(pstr) << endl;					// 8, pstr �������� ũ��
	cout << strlen(pstr) << endl;					// 6

	printf("=================\n");
	int a = 100;
	int* pa = &a;
	cout << sizeof(pa) << endl;
	cout << strlen(pstr) << endl;					// pstr �������� ũ��
	//pstr[0] = 's';								// ���ڿ��� �����ͷ� ����ϴ� ���� ������ �Ұ����ϴ�!

	printf("=================\n");
	printf("=================\n");

	/*
	C++ - style : heap ������ �����Ѵ�.
	*/
	string s = "string";
	cout << s << endl;
	cout << sizeof(s) << endl;			// 40
	//cout << strlen(s) << endl;
	cout << s.size() << endl;			// 6
	printf("=================\n");

	string s1 = "HongGilDong";
	cout << s1 << endl;
	cout << sizeof(s1) << endl;			// 40
	cout << s1.size() << endl;			// 11, size()��� ����Լ� ȣ���� ���� ���ڿ� ũ�� �˾Ƴ���
	printf("=================\n");

	string s2 = "Hi";
	string s3 = "Bye";

	string s4 = s2 + s3;
	cout << s4 << endl;
	return 0;
}