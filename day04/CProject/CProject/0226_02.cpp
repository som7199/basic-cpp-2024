#include <iostream>
using namespace std;

class MyClass
{

};

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void IninMembers(int price, int num, int money)	// => 생성자 : 객체를 생성하고 초기화한다.
	{
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;		// 판매한 사과 개수 리턴
	}
	void ShowSalesResult()
	{
		cout << "남은 사과 : " << numOfApples << endl;
		cout << "판매 수익 : " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
	//클래스는 아무런 선언이 존재하지 않을 때 private으로 간주됨!(구조체는 public)
	int myMoney;		// private => 클래스 내에서 접근 제어 지시자가 생략되었으니, private으로 간주
	int numOfApples;	// private

public:
	void IninMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}

	// 매개변수의 선언 위치에 참조자 써주고 함수 호출 시 전달되는 인자로 초기화! 
	// 동일한 객체를 가리킴! 참조니까 ㅎㅎ 
	// 별명도 seller라서 헷갈릴 수 있지만 seller 두 개가 같은 객체를 가리키고 있는 거 알겠지!!
	void BuyApples(FruitSeller& seller, int money)		// 참조자! 
	{
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}

	void ShowBuyResult()
	{
		cout << "현재 잔액 : " << myMoney << endl;
		cout << "사과 개수 : " << numOfApples << endl << endl;
	}
};

int main(void)
{
	FruitSeller seller;
	seller.IninMembers(1000, 20, 0);
	FruitBuyer buyer;				// 힙 영역에 할당할 때만 new 연산자 사용! new 연산자 안썼으니까 얘는 그냥 스택에서 바로 사용할 수 있음!
	buyer.IninMembers(5000);
	buyer.BuyApples(seller, 2000);	// 과일의 구매!

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
	return 0;
}