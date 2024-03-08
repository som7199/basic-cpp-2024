#ifndef __ARRAY_TEMPLATE_H_
#define __ARRAY_TEMPLATE_H_

#include <iostream>
#include <cstdlib>
using namespace std;

template <typename T>  // BoundCheckArray�� ���� ���ø� Ŭ���� ����
class BoundCheckArray
{
private:
    T* arr;  // ��Ҹ� ������ ���� �迭
    int arrlen;  // �迭�� ����

    BoundCheckArray(const BoundCheckArray& arr) { }   // ��ġ �ʴ� ���纻�� �����ϱ� ���� ���� ���纻 �����ڿ� �Ҵ� ������
    BoundCheckArray& operator=(const BoundCheckArray& arr) { }

public:
    BoundCheckArray(int len);  // ���� �Ű������� �ִ� ������
    T& operator[] (int idx);   // const�� �ƴ� ��ü�� ���� �����ε�� ÷�� ������
    T operator[] (int idx) const;  // const ��ü�� ���� �����ε�� ÷�� ������
    int GetArrLen() const;   // �迭�� ���̸� �˻��ϴ� Getter �Լ�
    ~BoundCheckArray();      // �������� �Ҵ�� �޸𸮸� �����ϴ� �Ҹ���
};

template <typename T>  // ������ ����
BoundCheckArray<T>::BoundCheckArray(int len) :arrlen(len)
{
    arr = new T[len];
}

template <typename T>  // const�� �ƴ� ��ü�� ���� �����ε�� ÷�� ������
T& BoundCheckArray<T>::operator[] (int idx)
{
    if (idx < 0 || idx >= arrlen)
    {
        cout << "Array index out of bound exception" << endl;
        exit(1);
    }
    return arr[idx];
}

template <typename T>  // const ��ü�� ���� �����ε�� ÷�� ������
T BoundCheckArray<T>::operator[] (int idx) const
{
    if (idx < 0 || idx >= arrlen)
    {
        cout << "Array index out of bound exception" << endl;
        exit(1);
    }
    return arr[idx];
}

template <typename T>  // �迭�� ���̸� �˻��ϴ� Getter �Լ�
int BoundCheckArray<T>::GetArrLen() const
{
    return arrlen;
}

template <typename T>  // �������� �Ҵ�� �޸𸮸� �����ϱ� ���� �Ҹ��� ���� ���ø� <���� �̸� T>
BoundCheckArray<T>::~BoundCheckArray()
{
    delete[]arr;
}

#endif
