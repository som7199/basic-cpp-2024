#ifndef __POINT_TEMPLATEE_H_
#define __POINT_TEMPLATEE_H_

template <typename T>  // T ������ ��ǥ�� ���� Point�� ���� ���ø� Ŭ���� ����
class Point
{
private:
	T xpos, ypos;
public:
	Point(T x = 0, T y = 0);  // x�� y�� �⺻���� ���� ������
	void ShowPosition() const;  // ��ǥ�� ǥ���ϴ� ��� �Լ�
};

template <typename T>  // Point Ŭ������ ������ ����
Point<T>::Point(T x, T y) : xpos(x), ypos(y)
{  }

template <typename T>   // ��ǥ�� ǥ���ϱ� ���� ��� �Լ� ����
void Point<T>::ShowPosition() const
{
	cout << '[' << xpos << ", " << ypos << ']' << endl;
}

#endif