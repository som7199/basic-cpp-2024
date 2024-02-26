#include <iostream>
using namespace std;
/*
ĸ��ȭ
*/
class SinivelCap	// �๰ óġ�� ĸ��
{
public:
	void Take() const { cout << "�๰�� ��~! ���ϴ�." << endl; }
};

class SneezeCap		// ��ä�� óġ�� ĸ��
{
public:
	void Take() const { cout << "��ä�Ⱑ �ܽ��ϴ�." << endl; }
};

class SnuffleCap	// �ڸ��� óġ�� ĸ��
{
public:
	void Take() const { cout << "�ڰ� �� �ո��ϴ�." << endl; }
};

class ColdPatient
{
public:
	// ������~~~!!
	// const �Լ��� �Լ� �ȿ� �ۼ��Ǿ� �ִ� ������ ����� �� �ִ� ���ɼ��� �������..! const�ϱ�
	void TakeSinivelCap(const SinivelCap& cap) const { 
		cap.Take(); 
	}
	void TakeSneezeCap(const SneezeCap& cap) const { cap.Take(); }
	void TakeSnuffleCap(const SnuffleCap& cap) const { cap.Take(); }
};

int main(void)
{
	SinivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;
	ColdPatient sufferer;

	sufferer.TakeSinivelCap(scap);
	sufferer.TakeSneezeCap(zcap);
	sufferer.TakeSnuffleCap(ncap);
	return 0;
}