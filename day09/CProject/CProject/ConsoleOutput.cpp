#include <iostream>   

namespace mystd
{
    using namespace std;

    class ostream  //����� ���� ostream Ŭ���� ����
    {
    public:
        void operator<< (const char* str)  // ���ڿ� ����� ���� �����ε�� ������
        {
            printf("%s", str);
        }
        void operator<< (char str) // ���� ���ڸ� ����ϱ� ���� �����ε�� ������
        {
            printf("%c", str);
        }
        void operator<< (int num)  //���� ����� ���� �����ε�� ������
        {
            printf("%d", num);
        }
        void operator<< (double e)  //double�� ����ϱ� ���� �����ε�� ������
        {
            printf("%g", e);
        }
        void operator<< (ostream& (*fp)(ostream& ostm))  //�����ڸ� ó���ϱ� ���� �����ε�� ������(��: endl)
        {
            fp(*this);
        }
    };

    ostream& endl(ostream& ostm)  //����� ���� endl �Լ� ����
    {
        ostm << '\n';
        fflush(stdout);
        return ostm;
    }
    ostream cout;  //Ŀ���� cout ��ü ����
}

int main(void)
{
    using mystd::cout;
    using mystd::endl;

    cout << "Simple String";  // ����� ���� cout ��ü�� ����Ͽ� �پ��� ���� ���
    cout << endl;
    cout << 3.14;
    cout << endl;
    cout << 123;
    endl(cout);
    return 0;
}