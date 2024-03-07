/*
5명의 이름과 국,영,수 3과목을 입력받아 학생별 총점과 평균, 그리고 과목별 총점과 평균을 구하시오.
1) 객체 포인터 배열 사용 
2) 객체 배열 사용 -> 이걸로 하겠다!
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

class Grade
{
	char* name;			// 포인터를 사용하고 있다.
	int kor;
	int mat;
	int eng;

public:
	Grade() {
		/*name = NULL;
		kor = 0;
		mat = 0;
		eng = 0;*/
		cout << "디폴트 생성자 호출" << endl;
	}
	// 생성자가 필요없다 왜냐?! 객체 배열 생성하자마자 디폴트 생성자 호출하니까! 얘는 쓰일 일이 없지 우린 받은 입력값으로 객체의 값을 초기화해줘야하니까!
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
		printf("소멸자 호출\n");
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
	//Grade gradeArr[3] = {};				// 객체 배열 생성 시 디폴트 생성자 호출됨!

	char name[20];
	int inKor, inMat, inEng, num;

	cout << "성적처리 학생 수 : ";
	cin >> num;

	// 동적으로 배열 할당 받기!!
	//vector<Grade*> gradeArr(num);
	vector<Grade> gradeArr(num);

	// 1. 입력을 받는다.
	for (int i = 0; i < num; i++) {
		cout << "이름 : ";
		cin >> name;

		cout << "국어점수 : ";
		cin >> inKor;

		cout << "영어점수 : ";
		cin >> inEng;

		cout << "수학점수 : ";
		cin >> inMat;
		cout << endl;

		//cout << name << inKor << inEng << inMat << endl;
		//2. 객체 생성 : 5개의 객체 생성, 객체 배열 or 객체  포인터 배열 중 뭘 쓸 것인가.. 이번엔 객체 배열을 쓰겠다
		gradeArr[i].AddStudent(name, inKor, inEng, inMat);		// setter의 기능 : 초기화!
		// 객체 생성 시 디폴트 생성자가 호출되고, 이미 객체 배열이 만들어졌으니까 생성자로 초기화를 할 수 없지!
		// 그래서 setter 역할을 하는 AddStudent() 함수를 만들어서 객체의 값을 초기화 해줌!!!
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
		//cout << "총점 : " << gradeArr[i]->sum() << endl << "평균 : " << gradeArr[i]->avr() << endl << endl;
		printf("%d번째 학생 총점 : %d,	평점 : %0.1f\n", i + 1, gradeArr[i].sum(), gradeArr[i].avr());
	}

	printf("\n");
	printf("국어 총점 : %d, 국어 평균 : %.1f\n", korSum, korSum / float(num));
	printf("영어 총점 : %d, 영어 평균 : %.1f\n", EngSum, EngSum / float(num));
	printf("수학 총점 : %d, 수학 평균 : %.1f\n\n", Matsum, Matsum / float(num));

	for (int i = 0; i < num; i++) {
		printf("객체 할당 소멸자 호출\n");
	}
	return 0;
}