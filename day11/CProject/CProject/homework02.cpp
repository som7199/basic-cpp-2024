/*
5���� �̸��� ��,��,�� 3������ �Է¹޾� �л��� ������ ���, �׸��� ���� ������ ����� ���Ͻÿ�.
1) ��ü ������ �迭 ��� 
2) ��ü �迭 ��� -> �̰ɷ� �ϰڴ�!
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

class Grade
{
	char* name;			// �����͸� ����ϰ� �ִ�.
	int kor;
	int mat;
	int eng;

public:
	Grade() {
		/*name = NULL;
		kor = 0;
		mat = 0;
		eng = 0;*/
		cout << "����Ʈ ������ ȣ��" << endl;
	}
	// �����ڰ� �ʿ���� �ֳ�?! ��ü �迭 �������ڸ��� ����Ʈ ������ ȣ���ϴϱ�! ��� ���� ���� ���� �츰 ���� �Է°����� ��ü�� ���� �ʱ�ȭ������ϴϱ�!
	/*Grade(const char* myname, int mykor, int myeng, int mymat)
	{
		name = new char[strlen(myname) + 1];
		strcpy(this->name, myname);
		kor = mykor;
		eng = myeng;
		mat = mymat;
	}*/
	void AddStudent(char* myname, int mykor, int myeng, int mymat)
	{
		name = myname;
		kor = mykor;
		eng = myeng;
		mat = mymat;
	}
	~Grade()
	{
		printf("�Ҹ��� ȣ��\n");
	}
	int getKor()
	{
		return kor;
	}
	int getMat()
	{
		return mat;
	}
	int getEng()
	{
		return eng;
	}
	int sum() const
	{
		int sum = kor + eng + mat;
		return sum;
	}
	double avr() const
	{
		double avr = sum() / 3.0;
		return avr;
	}
};

int main(void)
{
	//Grade gradeArr[3] = {};				// ��ü �迭 ���� �� ����Ʈ ������ ȣ���!

	char name[20];
	int inKor, inMat, inEng, num;

	cout << "����ó�� �л� �� : ";
	cin >> num;

	// �������� �迭 �Ҵ� �ޱ�!!
	//vector<Grade*> gradeArr(num);
	vector<Grade> gradeArr(num);

	// 1. �Է��� �޴´�.
	for (int i = 0; i < num; i++) {
		cout << "�̸� : ";
		cin >> name;

		cout << "�������� : ";
		cin >> inKor;

		cout << "�������� : ";
		cin >> inEng;

		cout << "�������� : ";
		cin >> inMat;
		cout << endl;

		//cout << name << inKor << inEng << inMat << endl;
		//2. ��ü ���� : 5���� ��ü ����, ��ü �迭 or ��ü  ������ �迭 �� �� �� ���ΰ�.. �̹��� ��ü �迭�� ���ڴ�
		gradeArr[i].AddStudent(name, inKor, inEng, inMat);		// setter�� ��� : �ʱ�ȭ!
		// ��ü ���� �� ����Ʈ �����ڰ� ȣ��ǰ�, �̹� ��ü �迭�� ����������ϱ� �����ڷ� �ʱ�ȭ�� �� �� ����!
		// �׷��� setter ������ �ϴ� AddStudent() �Լ��� ���� ��ü�� ���� �ʱ�ȭ ����!!!
	}

	int korSum = 0;
	int EngSum = 0;
	int Matsum = 0;
	for (int i = 0; i < num; i++) {
		korSum += gradeArr[i].getKor();
		EngSum += gradeArr[i].getEng();
		Matsum += gradeArr[i].getMat();
	}

	for (int i = 0; i < num; i++)
	{
		//cout << "���� : " << gradeArr[i]->sum() << endl << "��� : " << gradeArr[i]->avr() << endl << endl;
		printf("%d��° �л� ���� : %d,	���� : %0.1f\n", i + 1, gradeArr[i].sum(), gradeArr[i].avr());
	}

	printf("\n");
	printf("���� ���� : %d, ���� ��� : %.1f\n", korSum, korSum / float(num));
	printf("���� ���� : %d, ���� ��� : %.1f\n", EngSum, EngSum / float(num));
	printf("���� ���� : %d, ���� ��� : %.1f\n\n", Matsum, Matsum / float(num));

	for (int i = 0; i < num; i++) {
		printf("��ü �Ҵ� �Ҹ��� ȣ��\n");
	}
	return 0;
}