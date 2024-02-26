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
	void IninMembers(int price, int num, int money)	// => ������ : ��ü�� �����ϰ� �ʱ�ȭ�Ѵ�.
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
		return num;		// �Ǹ��� ��� ���� ����
	}
	void ShowSalesResult()
	{
		cout << "���� ��� : " << numOfApples << endl;
		cout << "�Ǹ� ���� : " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
	//Ŭ������ �ƹ��� ������ �������� ���� �� private���� ���ֵ�!(����ü�� public)
	int myMoney;		// private => Ŭ���� ������ ���� ���� �����ڰ� �����Ǿ�����, private���� ����
	int numOfApples;	// private

public:
	void IninMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}

	// �Ű������� ���� ��ġ�� ������ ���ְ� �Լ� ȣ�� �� ���޵Ǵ� ���ڷ� �ʱ�ȭ! 
	// ������ ��ü�� ����Ŵ! �����ϱ� ���� 
	// ���� seller�� �򰥸� �� ������ seller �� ���� ���� ��ü�� ����Ű�� �ִ� �� �˰���!!
	void BuyApples(FruitSeller& seller, int money)		// ������! 
	{
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}

	void ShowBuyResult()
	{
		cout << "���� �ܾ� : " << myMoney << endl;
		cout << "��� ���� : " << numOfApples << endl << endl;
	}
};

int main(void)
{
	FruitSeller seller;
	seller.IninMembers(1000, 20, 0);
	FruitBuyer buyer;				// �� ������ �Ҵ��� ���� new ������ ���! new ������ �Ƚ����ϱ� ��� �׳� ���ÿ��� �ٷ� ����� �� ����!
	buyer.IninMembers(5000);
	buyer.BuyApples(seller, 2000);	// ������ ����!

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();
	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();
	return 0;
}