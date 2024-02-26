#include <iostream>
using namespace std;
/*
캡슐화
*/
class SinivelCap	// 콧물 처치용 캡슐
{
public:
	void Take() const { cout << "콧물이 싹~! 납니다." << endl; }
};

class SneezeCap		// 재채기 처치용 캡슐
{
public:
	void Take() const { cout << "재채기가 멎습니다." << endl; }
};

class SnuffleCap	// 코막힘 처치용 캡슐
{
public:
	void Take() const { cout << "코가 뻥 뚫립니다." << endl; }
};

class ColdPatient
{
public:
	// 참조자~~~!!
	// const 함수는 함수 안에 작성되어 있는 내용이 변경될 수 있는 가능성이 없어야함..! const니까
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