/*
5���� �̸��� ��,��,�� 3������ �Է¹޾� �л��� ������ ���, �׸��� ���� ������ ����� ���Ͻÿ�.
1) ��ü ������ �迭 ��� -> �̰ɷ� �ϰڴ�!
2) ��ü �迭 ���
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Grade
{
	char* name;			// �����͸� ����ϰ� �ִ�.
	int kor;
	int mat;
	int eng;

public:
	Grade(const char* myname, int mykor, int myeng, int mymat)
	{
		this->name = new char[strlen(myname) + 1];
		strcpy(this->name, myname);
		this->kor = mykor;
		this->eng = myeng;
		this->mat = mymat;
	}
	~Grade()
	{
		printf("�Ҹ��� ȣ��\n\n");
		delete[] name;
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
	Grade* gradeArr[3];				// ��ü ������ �迭

	char name[20];
	int inKor, inMat, inEng;

	// 1. �Է��� �޴´�.
	for (int i = 0; i < 3; i++) {
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
		//2. ��ü ���� : 5���� ��ü ����, ��ü �迭 or ��ü  ������ �迭 �� �� �� ���ΰ�.. ��ü ������ �迭�� ���ڴ�
		gradeArr[i] = new Grade(name, inKor, inEng, inMat);
	}

	int korSum = 0;
	int EngSum = 0;
	int Matsum = 0;
	for (int i = 0; i < 3; i++) {
		korSum += gradeArr[i]->getKor();
		EngSum += gradeArr[i]->getEng();
		Matsum += gradeArr[i]->getMat();
	}
	
	for (int i = 0; i < 3; i++)
	{ 
		//cout << "���� : " << gradeArr[i]->sum() << endl << "��� : " << gradeArr[i]->avr() << endl << endl;
		printf("%d��° �л� ���� : %d,	���� : %0.1f\n", i+1, gradeArr[i]->sum(), gradeArr[i]->avr());
	}

	printf("\n");
	printf("���� ���� : %d, ���� ��� : %.1f\n", korSum, float(korSum / size(gradeArr)));
	printf("���� ���� : %d, ���� ��� : %.1f\n", EngSum, float(EngSum / size(gradeArr)));
	printf("���� ���� : %d, ���� ��� : %.1f\n\n", Matsum, float(Matsum / size(gradeArr)));

	for (int i = 0; i < 3; i++) {
		printf("��ü �Ҵ� �Ҹ��� ȣ��\n");
		delete gradeArr[i];
	}
	return 0;
}

