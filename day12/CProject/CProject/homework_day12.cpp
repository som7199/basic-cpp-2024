/*
* Parent class
 class Product : id, price, producer
* Child class
*class Book : ISBN, author, title		// 978-89-001-0001-1
 class Handphone : model, RAM
 class Computer : model, cpu, RAM
* 객체포인터 배열 사용 : product[100]
* string 클래스 사용 가능
* 파일 분할

* 메인 화면
 ---- 상품 관리 프로그램 ----
 1. 상품추가 / 2. 상품출력 / 3. 상품검색 / 0. 종료

 1 또는 2 또는 3 선택한 경우
 1 책 2 핸드폰 3 컴퓨터
 선택 목록을 띄워 해당 상품을 선택한 후에 추가, 출력, 또는 검색 실행된다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// 외부에서 클래스의 private 멤버변수에 접근하기 위해 getter setter를 정의해주기
class Product
{
private:
	string id;
	int price;
	string producer;
public:
	Product(string pid, int pprice, string pproducer) : id(pid), price(pprice), producer(pproducer) {}
	string getId()
	{
		return id;
	}
	int getPrice()
	{
		return price;
	}
	string getProducer()
	{
		return producer;
	}
};

class Book : public Product
{
private:
	int ISBN;
	string author;
	string title;
public:
	Book(string pid, int pprice, string pproducer, int bISBN, string bAuthor, string btitle) : Product(pid, pprice, pproducer)
	{
		ISBN = bISBN;
		author = bAuthor;
		title = btitle;
	}
	int ISBN()
	{
		return ISBN;
	}
	string getAuthor()
	{
		return author;
	}
	string getTitle()
	{
		return title;
	}
};

// getter 만들어놓기!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
class Handphone : public Product
{
private:
	string model;
	string RAM;
public:
	Handphone(string pid, int pprice, string pproducer, string hModel, string hRAM) : Product(pid, pprice, pproducer)
	{
		model = hModel;
		RAM = hRAM;
	}
};

class Computer : public Product
{
private:
	string model;
	string cpu;
	string RAM;
public:
	Computer(string pid, int pprice, string pproducer, string cModel, string cCpu, string cRAM) : Product(pid, pprice, pproducer)
	{
		model = cModel;
		cpu = cCpu;
		RAM = cRAM;
	}
};

void startMenu()
{
	printf("===== 상품 관리 프로그램 =====\n");
	printf("1. 상품추가 / 2. 상품출력 / 3. 상품검색 / 4. 종료\n");
}


// 책, 핸드폰, 컴퓨터 중 선택하고, 선택값을 반환하여 main에서 사용해보기..
int selectProduct()
{
	int select = 0;
	cout << "책 -> (1) / 핸드폰 -> (2) / 컴퓨터 -> (3)" << endl;
	cin >> select;
	return select;
}
// 상품 선택값을 매개변수로 전달받고, 해당 객체 기준으로 출력문 만들기
void ShowProductInfo(int select)
{
	if (select == 1) {
		cout << "책 선택" << endl;
	}
	else if (select == 2) {
		cout << "핸드폰 선택" << endl;
	}
	else if (select == 3) {
		cout << "컴퓨터 선택" << endl;
	}
}

// 이건 아직 어떻게 할지 감이 안잡힌다
void SearchProduct()
{
	// 부모 타입의 포인터로 자식 객체에게 접근? 이거 안된다는데
	// 객체 중심으로 만들어줘야함! 이거 뭐 쓰면 됐더라 virtual 키워드??
}

int main(void)
{
	
	Product* productArr[100];		// 객체 포인터 배열
	int menu_num, select_product;
	int idx = 0;

	while (true)
	{
		startMenu();
		cout << "> ";
		cin >> menu_num;

		// 상품 추가
		if (menu_num == 1)
		{
			cout << "추가할 상품을 선택하세요 > " << endl;
			select_product = selectProduct();
			// 책 추가
			if (select_product == 1) {

				int price, ISBN;
				string id;
				string producer;
				string author;
				string title;

				cout << "id : ";
				cin >> id;

				cout << "producer : ";
				cin >> producer;

				cout << "author : ";
				cin >> author;

				cout << "title : ";
				cin >> title;

				cout << "price : ";
				cin >> price;

				cout << "ISBN : ";
				cin >> ISBN;

				productArr[idx] = new Book(id, price, producer, ISBN, author, title);
				idx++;
			}
			// 핸드폰 추가
			else if (select_product == 2)
			{
				int price;
				string id;
				string producer;
				string model;
				string RAM;

				cout << "id : ";
				cin >> id;

				cout << "producer : ";
				cin >> producer;

				cout << "model : ";
				cin >> model;

				cout << "RAM : ";
				cin >> RAM;

				cout << "price : ";
				cin >> price;

				productArr[idx] = new Handphone(id, price, producer, model, RAM);
				idx++;
			}
			// 컴퓨터 추가
			else if (select_product == 3)
			{
				int price;
				string id;
				string producer;
				string model;
				string cpu;
				string RAM;

				cout << "id : ";
				cin >> id;

				cout << "producer : ";
				cin >> producer;

				cout << "model : ";
				cin >> model;

				cout << "RAM : ";
				cin >> RAM;

				cout << "cpu : ";
				cin >> cpu;

				cout << "price : ";
				cin >> price;

				productArr[idx] = new Computer(id, price, producer, model, cpu, RAM);
				idx++;
			}
		}

		// 상품출력
		else if (menu_num == 2)
		{
			cout << "상품출력" << endl;
			// 객체의 멤버 변수 중 하나로 검색해서 객체 출력(객체 정보 출력이겠지?)
			for (int i = 0; i < size(productArr); i++)
				cout << productArr[i]->id << endl;
		}
		// 상품검색
		else if (menu_num == 3)
		{
			cout << "상품검색" << endl;
		}
		// 종료
		else if (menu_num == 4)
		{
			cout << "프로그램 종료" << endl;
			break;
		}
		else {
			cout << "선택 번호 확인 부탁드려요~~^^" << endl;
			continue;
		}
	}
	return 0;
}